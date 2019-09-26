/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdus-samad <abdus-samad@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:03:03 by kmohamma          #+#    #+#             */
/*   Updated: 2019/09/26 14:03:58 by abdus-samad      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct		s_lst
{
	int				data;
	struct s_lst	*next;
}					t_lst;

typedef	struct		s_data
{
	t_lst			*a;
	t_lst			*b;
	t_lst			*head;
	t_lst			*temp;
	int				i;
}					t_data;

int					is_sorted(t_lst *a);
t_lst				*create(int n);
int					ft_lstlen(t_lst *a);
void				sa(t_lst *stack);
void				sb(t_lst *stack);
void				ab_swap(t_lst *stack_a, t_lst *stack_b);
void				pa(t_lst **a, t_lst **b, int data);
void				pb(t_lst **b, t_lst **a, int data);
void				delete_node(t_lst *node);
void				ra(t_lst **a);
void				rb(t_lst **b);
void				rra(t_lst **a);
void				rrb(t_lst **b);
void				sort_2(t_lst *head);
void				sort_3(t_lst **head);
void				sort_4(t_lst *head, t_lst *box);
void				sort_5(t_lst *head, t_lst *box);
int					min(t_lst *head);
long long			ft_ato_longlong(char *str);
int					check_size(long n);
int					check_if_dup(int argc, char **argv);
int					is_num(char *str);
int					is_valid(int argc, char **argv);
t_lst				*kmohamma(int argc, char **argv);
int					get_next_line(const int fd, char **line);
void    			print(t_lst *struct_a, t_lst *struct_b);
int    				store_instruction(t_lst **a, t_lst **b, char *instr);
void    			print_list(t_lst *head);

#endif
