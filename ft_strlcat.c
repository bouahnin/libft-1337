/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 13:05:11 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/17 15:29:12 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	z;
	size_t	s;

	if (!dst || !src)
		return (0);
	z = 0;
	s = ft_strlen(dst);
	if (s >= size)
		return (size + ft_strlen(src));
	while ((z + s) < size - 1 && src[z] != '\0')
	{
		dst[z + s] = src[z];
		z++;
	}
	dst[z + s] = '\0';
	return (s + ft_strlen(src));
}
