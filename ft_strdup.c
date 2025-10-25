/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:22:09 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/21 21:41:26 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		z;
	char	*dup;

	dup = malloc(ft_strlen(s) + 1);
	z = 0;
	if (!dup)
		return (NULL);
	while (s[z] != '\0')
	{
		dup[z] = s[z];
		z++;
	}
	dup[z] = '\0';
	return (dup);
}
