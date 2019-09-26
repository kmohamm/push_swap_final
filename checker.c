/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:32:25 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/26 14:22:20 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "header.h"

int             main(int argc, char **argv)
{
        t_data m;
        //int           i;
        //t_lst *tmp;
        char    *line_store;

        //i = 0;
		if(argc == 1)
			exit(1);
        if (is_valid(argc, argv) == 0)
        {
                ft_putendl("Error");
                return (0);
        }
        else
        {
                m.a = kmohamma(argc, argv);
                m.b = NULL;
        }
//      print(m.a, m.b);
        //tmp = m.a;
        while (get_next_line(0, &line_store))
        {
//              store_instruction(m.a, m.b, line_store);
                if (store_instruction(&(m.a), &(m.b), line_store) == 0)
                {
                        ft_putendl("Error");
                        return (0);
                }
//              if (tmp.next)
//              {
//                      tmp = tmp.next;
//              }
//              i++;
        //      print(m.a, m.b);
        }
        if (is_sorted(m.a) == 1)
        {
                ft_putendl("OK");
        }
        else if (!is_sorted(m.a))
        {
                ft_putendl("KO");
        }
        print(m.a, m.b);
        return (0);
}