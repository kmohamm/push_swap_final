/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 09:22:33 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/18 16:35:59 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <stdlib.h>
#include "./libft/libft.h"

void	add_top(t_lst **node, int data)
{
	t_lst	*new;

	new = (t_lst *)malloc(sizeof(t_lst));
	new->data = data;
	new->next = NULL;
	if (*node == NULL)
		*node = new;
	else
	{
		new->next = *node;
		*node = new;
	}
}

void    pa(t_lst **a, t_lst **b, int data)
{
    t_lst    *head;
    head = (t_lst*)malloc(sizeof(t_lst));
    head->data = data;
    head->next = (*a);
    (*a) = head;
    if ((*b)->next)
    {
        delete_node(*b);
    }
    else
    {
        free(*b);
        *b = NULL;
    }
}

void    pb(t_lst **a, t_lst **b, int data)
{
    t_lst    *head;
    head = (t_lst*)malloc(sizeof(t_lst));
    head->data = data;
    head->next = (*b);
    (*b) = head;
    if ((*a)->next)
    {
        delete_node(*a);
    }
    else
    {
        free(*a);
        (*a) = NULL;
    }
}

void	ra(t_lst **a)
{
	t_lst *temp;
	t_lst *temp1;

	temp = *a;
	temp1 = *a;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = temp1;
	temp = temp1->next;
	temp1->next = NULL;
	*a = temp;
}

void	rb(t_lst **b)
{
	t_lst *temp;
	t_lst *temp1;

	temp = *b;
	temp1 = *b;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = temp1;
	temp = temp1->next;
	temp1->next = NULL;
	*b = temp;
}
