/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 09:16:07 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/16 09:34:43 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	sa(t_lst *stack)
{
	int *a;
	int *b;
	int temp;

	//ft_putendl("here");
	if (stack->next == NULL)
		return ;
	a = &stack->data;
	b = &stack->next->data;
	temp = *a;
	*a = *b;
	*b = temp;
}

void	sb(t_lst *stack)
{
	int *a;
	int *b;
	int temp;
	
//	ft_putendl("here");
	if (stack->next == NULL)
		return ;
	a = &stack->data;	
	b = &stack->next->data;
	temp = *a;
	*a = *b;
	*b = temp;
}

void	ab_swap(t_lst *stack_a, t_lst *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

void	rra(t_lst **a)
{
	t_lst *last;
	t_lst *listlast;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	last = *a;
	listlast = NULL;
	while (last->next != NULL)
	{
		listlast = last;
		last = last->next;
	}
	listlast->next = NULL;
	last->next = *a;
	*a = last;
}

void	rrb(t_lst **b)
{
	t_lst *listlast;
	t_lst *last;

	if (*b == NULL || (*b)->next == NULL)
		return ;
	listlast = NULL;
	last = *b;
	while (last->next != NULL)
	{
		listlast = last;
		last = last->next;
	}
	listlast->next = NULL;
	last->next = *b;
	*b = last;
}
