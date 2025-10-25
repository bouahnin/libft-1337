/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:07:23 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/17 15:08:22 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	z;
	size_t	s;

	z = 0;
	s = 0;
	if (ft_strlen(little) == 0)
		return ((char *)(big + z));
	while (z < len && big[z] != '\0')
	{
		if (big[z] == little[0])
		{
			s = 0;
			while (little[s] != '\0' && (z + s) < len && big[z + s] != '\0')
			{
				s++;
			}
			if (little[s] != '\0')
				return ((char *)(big + z));
		}
		z++;
	}
	return (NULL);
}
