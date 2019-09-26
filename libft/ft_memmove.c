/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:11:36 by kmohamma          #+#    #+#             */
/*   Updated: 2019/06/07 16:28:39 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	unsigned char *sorc;

	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	if (len <= 0)
		return (dest);
	if (sorc < dest)
	{
		while (len)
		{
			dest[len - 1] = sorc[len - 1];
			len--;
		}
		return (dest);
	}
	else
	{
		ft_memcpy(dest, sorc, len);
		return (dest);
	}
}
