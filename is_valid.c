/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 08:22:56 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/13 09:27:10 by mnzolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "libft/libft.h"

int          is_valid(int argc, char **argv)
{
    int        i;
    i = 1;
    while (i < argc)
    {
        if (!is_num(argv[i]))
            return (0);
        if (check_size(ft_ato_longlong(argv[i])))
            return (0);
        i++;
    }
    if (check_if_dup(argc, argv))
        return (0);
    return (1);
}
