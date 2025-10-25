/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 20:15:07 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 20:24:49 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	z;

	z = 0;
	if (size > 0)
	{
		while (src[z] && z < size - 1)
		{
			dst[z] = src[z];
			z++;
		}
		dst[z] = '\0';
	}
	return (ft_strlen(src));
}
