/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:42:15 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/21 21:39:25 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	z;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	z = 0;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (z < len && s[start + z] != '\0')
	{
		str[z] = s[start + z];
		z++;
	}
	str[z] = '\0';
	return (str);
}
