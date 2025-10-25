/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:35:13 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/24 13:02:02 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t	t;

	t = nmemb * size;
	if (nmemb != 0 && t / size != nmemb)
		return (NULL);
	s = malloc(t);
	if (!s)
		return (NULL);
	ft_bzero(s, t);
	return (s);
}
