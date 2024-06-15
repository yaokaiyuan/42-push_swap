/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 21:21:25 by ykai-yua          #+#    #+#             */
/*   Updated: 2024/06/16 01:06:38 by ykai-yua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"


typedef struct		s_list
{
	int				value;
	int				index;
	struct s_list	*next;	
}					t_list;

void		ft_error(char *str);
int			swap(t_list **stack);
int			sa(t_list **stack_a);
int			sb(t_list **stack_b);
int			ss(t_list **stack_a, t_list **stack_b);
int			push(t_list **stack_to, t_list **stack_from);
int			pa(t_list **stack_a, t_list **stack_b);
int			pb(t_list **stack_a, t_list **stack_b);
int			rotate(t_list **stack);
int			ra(t_list **stack_a);
int			rb(t_list **stack_b);
int			rr(t_list **stack_a, t_list **stack_b);
int			reverserotate(t_list **stack);
int			rra(t_list **stack_a);
int			rrb(t_list **stack_b);
int			rrr(t_list **stack_a, t_list **stack_b);

static int	find_min(t_list **stack, int val);

#endif