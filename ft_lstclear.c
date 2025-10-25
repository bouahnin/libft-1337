/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:58:14 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/23 18:12:33 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*use;
	t_list	*next;

	use = *lst;
	while (use)
	{
		next = use->next;
		del(use->content);
		free(use);
		use = next;
	}
	*lst = NULL;
}
