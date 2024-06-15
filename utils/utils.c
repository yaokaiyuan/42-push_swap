/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 09:32:53 by ykai-yua          #+#    #+#             */
/*   Updated: 2024/06/16 00:28:05 by ykai-yua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *str)
{
	ft_putendl_fd(str, 1);
	exit(0);
}

int	is_sorted(t_list **stack)
{
	t_list	*head;

	head = *stack;
	while (head && head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

int	find_index_len(t_list **stack, int index)
{
	t_list	*head;
	int		len;

	len = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		len++;
		head = head->next;
	}
	return (len);
}
