/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:25:00 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 20:31:23 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			z;
	unsigned char	*td;
	unsigned char	*ts;

	if (!dest && !src)
		return (NULL);
	td = (unsigned char *)dest;
	ts = (unsigned char *)src;
	if (ts < td)
	{
		while (n--)
			td[n] = ts[n];
	}
	else
	{
		z = 0;
		while (z < n)
		{
			td[z] = ts[z];
			z++;
		}
	}
	return (dest);
}
