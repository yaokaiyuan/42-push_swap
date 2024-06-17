/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listtools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 01:52:44 by ykai-yua          #+#    #+#             */
/*   Updated: 2024/06/18 02:01:37 by ykai-yua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int *value)
{
	t_list	*node;

	node = (t_list *)(sizeof(*node));
	if (node == NULL)
		return (NULL);
	node->value = value;
	node->value = -1;
	node->next = NULL;
	return (node);
}
