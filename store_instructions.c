/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   store_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 15:24:51 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/26 14:16:56 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

//Please notice that the prototype of the function is now (t_lst **a, t_lst **b, ... ) This has to be changed in header.h too.

//Due to the t_lst ** instead of passing a or b it's now *a or *b, and instead of &a or &b it's a or b.
//Also please note how I dereference a or b for the data. i.e. (*a)->data.


int             store_instruction(t_lst **a, t_lst **b, char *line_store)
{
        if (ft_strcmp("sa", line_store) == 0)
        {
       // ft_putendl(line_store);
                sa(*a);
                return (1);
        }
        else if (ft_strcmp("sb", line_store) == 0)
        {
                sb(*b);
                return (1);
        }
        else if (ft_strcmp("ss", line_store) == 0)
        {
                ab_swap(*a, *b);
                return (1);
        }
        else if (ft_strcmp("rra", line_store) == 0)
        {
                rra(a);
                return (1);
        }
        else if (ft_strcmp("rrb", line_store) == 0)
        {
                rrb(b);
                return (1);
        }
        else if (ft_strcmp("pa", line_store) == 0)
        {
                if (b != NULL)
                {
//      Here you accidently swapped the a and b around so I changed that.
//      It was pa(&b, &a, ...)
                        pa(a, b, (*b)->data);
                }
                return (1);
        }
        else if (ft_strcmp("pb", line_store) == 0)
        {
                pb(a, b, (*a)->data);
                return (1);
        }
        else if (ft_strcmp("ra", line_store) == 0)
        {
                ra(a);
                return (1);
        }
        else if (ft_strcmp("rb", line_store) == 0)
        {
                rb(b);
                return (1);
        }
        else if (ft_strcmp("rr", line_store) == 0)
        {
                ra(a);
                rb(b);
                return (1);
        }
        else if ((ft_strcmp("rrr", line_store) == 0))
		{
			rra(a);
			rrb(b);
			return(1);
		}
		else
        {
                ft_putendl("Error");
                exit(0);
        }
}