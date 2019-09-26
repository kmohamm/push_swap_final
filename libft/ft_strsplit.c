/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:38:14 by kmohamma          #+#    #+#             */
/*   Updated: 2019/06/10 14:12:44 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		find_wd_count(const char *s, char d)
{
	int		position;
	int		nb;

	position = 0;
	nb = 0;
	while (*s != '\0')
	{
		if (*s != d && position == 0)
		{
			position = 1;
			nb++;
		}
		if (*s == d && position == 1)
			position = 0;
		s++;
	}
	return (nb);
}

static int		find_wd_len(const char *s, char d)
{
	int		len;

	len = 0;
	while (*s != '\0' && *s != d)
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		wd;
	int		i;

	i = 0;
	if (!s)
		return (0);
	wd = find_wd_count(s, c);
	tab = (char**)malloc(sizeof(*tab) * (find_wd_count(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (wd > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub(s, 0, find_wd_len(s, c));
		if (tab[i] == NULL)
			return (NULL);
		s = s + find_wd_len(s, c);
		i++;
		wd--;
	}
	tab[i] = NULL;
	return (tab);
}
