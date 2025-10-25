/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 22:25:00 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/20 22:19:01 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			z;
	unsigned char	*td;
	unsigned char	*ts;

	z = 0;
	td = (unsigned char *)dest;
	ts = (unsigned char *)src;
	if (ts < td)
	{
		while (n > 0)
		{
			n--;
			td[n] = ts[n];
		}
	}
	else
	{
		while (z < n)
		{
			td[z] = ts[z];
			z++;
		}
	}
	return (dest);
}
