/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:57:27 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/21 21:40:45 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*neg(const char *s)
{
	if (!s)
		s = "";
	return (s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	total;
	char			*new;
	size_t			z;
	size_t			s;

	s1 = neg(s1);
	s2 = neg(s2);
	total = ft_strlen(s1) + ft_strlen(s2);
	new = malloc(total + 1);
	if (!new)
		return (NULL);
	z = 0;
	s = 0;
	while (s1[z] != '\0')
	{
		new[z] = s1[z];
		z++;
	}
	while (s2[s] != '\0')
	{
		new[z + s] = s2[s];
		s++;
	}
	new[total] = '\0';
	return (new);
}
