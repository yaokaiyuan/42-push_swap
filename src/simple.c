/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 04:31:05 by ykai-yua          #+#    #+#             */
/*   Updated: 2024/06/17 22:11:01 by ykai-yua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min(t_list **stack, int val)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != val)
			min = head->index;
	}
	return (min);
}

static void	sort3(t_list **stack_a)
{
	t_list	*head;
	int		min;
	int		nextmin;

	head = *stack_a;
	min = find_min(stack_a, -1);
	nextmin = find_min(stack_a, min);
	if (head->index == min && head->next->index != nextmin)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if (head->index == nextmin && head->next->index != min)
		rra(stack_a);
	else if (head->index == nextmin || head->next->index == min)
		sa(stack_a);
	else if (head->next->index == min)
		ra(stack_a);
	else
	{
		sa(stack_a);
		rra(stack_a);
	}
}

static void	sort4(t_list **stack_a, t_list **stack_b)
{
	int	len;

	if (is_sorted(stack_a))
		return ;
	len = find_index_len(stack_a, find_min(stack_a, 1));
	if (len == 1)
		ra(stack_a);
	else if (len == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (len == 3)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort3(stack_a);
	pa(stack_a, stack_b);
}

static void	sort5(t_list **stack_a, t_list **stack_b)
{
	int	len;

	len = find_index_len(stack_a, find_min(stack_a, 1));
	if (is_sorted(stack_a))
		return ;
	if (len == 1)
		ra(stack_a);
	else if (len == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (len == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (len == 4)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	simple_sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (is_sorted(stack_a) || ft_lstsize(*stack_a) == 0
		|| ft_lstsize(*stack_a) == 1)
		return ;
	size = ft_lstsize(*stack_a);
	if (size == 2)
		sa(stack_a);
	else if (size == 3)
		sort3(stack_a);
	else if (size == 4)
		sort4(stack_a, stack_b);
	else if (size == 5)
		sort5(stack_a, stack_b);
}
