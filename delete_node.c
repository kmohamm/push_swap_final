/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmohamma <kmohamma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:08:28 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/13 16:31:50 by kmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	delete_node(t_lst *node)
{
	t_lst *temp;

	temp = node->next;
	node->data = node->next->data;
	node->next = temp->next;
	free(temp);
}
