/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 13:42:15 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 20:53:30 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	z;
	size_t	szlen;

	if (s == NULL)
		return (NULL);
	szlen = ft_strlen(s);
	if (start >= szlen)
		return (ft_strdup(""));
	z = 0;
	if (len > szlen - start)
		len = szlen - start;
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
