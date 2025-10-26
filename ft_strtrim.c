/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:34:36 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/26 15:45:50 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_set(const char str, const char *sbr)
{
	size_t	z;

	z = 0;
	while (sbr[z])
	{
		if (sbr[z] == str)
		{
			return (1);
		}
		z++;
	}
	return (0);
}

static size_t	trim(char const *s1, char const *set, size_t *start,
		size_t *end)
{
	size_t	len;
	size_t	szlen;

	szlen = ft_strlen(s1);
	*end = szlen - 1;
	while (*end > 0 && ft_set(s1[*end], set))
		(*end)--;
	while (*start < szlen && ft_set(s1[*start], set))
		(*start)++;
	if ((*start) > *end)
		len = 0;
	else
		len = (size_t)(*end - *start + 1);
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;
	size_t	z;
	size_t	len;

	start = 0;
	end = 0;
	if (!s1 || !set)
		return (NULL);
	len = trim(s1, set, &start, &end);
	if (len == 0)
		return (ft_strdup(""));
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	z = 0;
	while (z < len)
	{
		new[z] = s1[start + z];
		z++;
	}
	new[z] = '\0';
	return (new);
}
