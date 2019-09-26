/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 08:52:26 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/20 16:27:02 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"

t_lst	*kmohamma(int argc, char **argv)
{
	t_data	v;
	t_lst	*n1;

	v.i = 1;
	v.head = NULL;
	v.temp = NULL;
	v.b = (t_lst*)malloc(sizeof(t_lst));
	while (v.i < argc)
	{
		n1 = (t_lst*)malloc(sizeof(t_lst));
		n1->data = atoi(argv[v.i]);
		n1->next = NULL;
		if (v.temp == NULL)
		{
			v.head = n1;
			v.temp = v.head;
		}
		else
		{
			v.temp->next = n1;
			v.temp = v.temp->next;
		}
		v.i++;
	}
	return (v.head);
}

// void	print(t_lst *struct_a, t_lst *struct_b)
// {
// 	t_lst *temp1;
// 	t_lst *temp2;

// 	temp1 = struct_a;
// 	temp2 = struct_b;
// 	ft_putendl("ListA\tListB");
// 	while (temp1 || temp2)
// 	{
// 		if (temp1)
// 		{
// 			ft_putnbr(temp1->data);
// 			temp1 = temp1->next;
// 		}
// 		ft_putchar('\t');
// 		if (temp2)
// 		{
// 			ft_putnbr(temp2->data);
// 			temp2 = temp2->next;
// 		}
// 		ft_putchar('\n');
// 	}
// }

t_lst	*create(int n)
{
	t_lst	*ret;

	ret = malloc(sizeof(t_lst));
	ret->data = n;
	ret->next = NULL;
	return (ret);
}
