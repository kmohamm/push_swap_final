/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:28:01 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/26 14:32:32 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	t_data m;
	

	if (is_valid(argc, argv) == 0)
	{
		ft_putendl("Error");
		return (0);
	}
	else
	{
	 	m.a = kmohamma(argc, argv);
	//	print(m.a, m.b);
		 
		// pb(&m.a, &m.b, m.a->data);
		// pb(&m.a, &m.b, m.a->data);
		// pb(&m.a, &m.b, m.a->data);
		// pa(&m.a, &m.b, m.b->data);
		if (is_sorted(m.a) == 1)
		{
			ft_putendl(ft_itoa(is_sorted(m.a)));
			return (0);
		}
		else if (ft_lstlen(m.a) == 2)
		{
			if (!is_sorted(m.a))
			{
				ft_putendl("sa");
			}
		}
		else if (ft_lstlen(m.a) == 3)
		{
			if (!is_sorted(m.a))
				sort_3(&m.a);
		}
		else if (ft_lstlen(m.a) == 4)
		{
			if (!is_sorted(m.a))
				sort_4(m.a, m.b);
		}
		else if (ft_lstlen(m.a) == 5)
		{
			if (!is_sorted(m.a))
				sort_5(m.a, m.b);
		}
	}
//	print_list(m.a);
	//sleep(30);
	return (0);
}
