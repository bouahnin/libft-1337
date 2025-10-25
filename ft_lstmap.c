/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:08:13 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 15:56:36 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	t_list	*curr;

	if (!lst || !f)
		return (NULL);
	head = ft_lstnew((*f)(lst->content));
	curr = head;
	while (lst)
	{
		lst = lst->next;
		if (!lst)
			break ;
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		curr->next = new;
		curr = new;
	}
	return (head);
}
