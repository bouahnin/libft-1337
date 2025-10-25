/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:42:31 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 13:11:33 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			z;
	unsigned char	*td;
	unsigned char	*ts;

	if (!dest && !src)
		return (NULL);
	if (!n)
		return (dest);
	z = 0;
	td = (unsigned char *)dest;
	ts = (unsigned char *)src;
	while (z < n)
	{
		td[z] = ts[z];
		z++;
	}
	return (dest);
}
