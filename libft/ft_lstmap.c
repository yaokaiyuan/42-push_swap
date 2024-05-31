/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 21:04:50 by ykai-yua          #+#    #+#             */
/*   Updated: 2024/03/02 02:19:43 by ykai-yua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnod;
	void	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		tmp = f(lst->content);
		newnod = ft_lstnew(tmp);
		ft_lstadd_back(&newlst, newnod);
		if (!newnod)
		{
			del(tmp);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (newlst);
}
