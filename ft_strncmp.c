/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:38:32 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/17 15:17:44 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	z;

	z = 0;
	if (n == 0)
		return (0);
	while (z < n - 1 && s1[z] != '\0' && s1[z] == s2[z])
	{
		z++;
	}
	return ((unsigned char)s1[z] - (unsigned char)s2[z]);
}
