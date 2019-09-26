/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:26:33 by kmohamma          #+#    #+#             */
/*   Updated: 2019/06/07 16:20:36 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dpos;
	const char	*spos;

	i = 0;
	dpos = dest;
	spos = src;
	while (i < n)
	{
		if (n == 0 || dpos == spos)
			return (dest);
		dpos[i] = spos[i];
		i++;
	}
	return (dest);
}
