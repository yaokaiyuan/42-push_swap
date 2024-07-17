/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 21:21:25 by ykai-yua          #+#    #+#             */
/*   Updated: 2024/07/17 17:50:09 by ykai-yua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;	
}					t_list;

void			ft_error(char *str);
int				swap(t_list **stack);
int				sa(t_list **stack_a);
int				sb(t_list **stack_b);
int				ss(t_list **stack_a, t_list **stack_b);
int				push(t_list **stack_to, t_list **stack_from);
int				pa(t_list **stack_a, t_list **stack_b);
int				pb(t_list **stack_a, t_list **stack_b);
int				rotate(t_list **stack);
int				ra(t_list **stack_a);
int				rb(t_list **stack_b);
int				rr(t_list **stack_a, t_list **stack_b);
int				reverserotate(t_list **stack);
int				rra(t_list **stack_a);
int				rrb(t_list **stack_b);
int				rrr(t_list **stack_a, t_list **stack_b);

int				is_sorted(t_list **stack);
int				find_index_len(t_list **stack, int index);
void			simple_sort(t_list **stack_a, t_list **stack_b);

void			radix_sort(t_list **stack_a, t_list **stack_b);

t_list			*ft_lstnew(int value);
void			ft_lstadd_front(t_list **lst, t_list *new);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
size_t			ft_lstsize(t_list *lst);
t_list			*find_next_min(t_list **stack);
void			index_stack(t_list **stack);
void			ft_free(char **str);

void			ft_check_args(int ac, char **av);
void			ft_free_stack(t_list **stack);

int				ft_isspace(char c);

#endif
