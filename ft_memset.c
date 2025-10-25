/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:28:09 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 20:34:08 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			z;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	z = 0;
	while (z < n)
	{
		ptr[z] = (unsigned char)c;
		z++;
	}
	return (s);
}
