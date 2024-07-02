/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 21:21:25 by ykai-yua          #+#    #+#             */
/*   Updated: 2024/06/29 16:59:07 by ykai-yua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

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

static int		find_min(t_list **stack, int val);
int				is_sorted(t_list **stack);
int				find_index_len(t_list **stack, int index);
static void		sort3(t_list **stack_a);
static void		sort4(t_list **stack_a, t_list **stack_b);
static void		sort5(t_list **stack_a, t_list **stack_b);
void			simple_sort(t_list **stack_a, t_list **stack_b);

static int		count_max_bits(t_list **stack);
void			radix_sort(t_list **stack_a, t_list **stack_b);

t_list			*ft_lstnew(int *value);
static t_list	*find_next_min(t_list **stack);
void			index_stack(t_list **stack);
void			ft_free(char **str);
static void		initstack(t_list **stack, int ac, char **av);
static void 	sortstack(t_list **stack_a, t_list **stack_b);

static int		ft_check_duplicate(int num, char **av, int total_args);
static int		ft_isnum(char *num);
static int		ft_check_overflow(const char *num_str);
void			ft_check_args(int ac, char **av);
void			ft_free_stack(t_list **stack);

#endif
