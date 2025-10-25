/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:34:36 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 18:57:29 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

static size_t	trim(char const *s1, char const *set, size_t *start, int *end)
{
	size_t	len;

	*end = ft_strlen(s1) - 1;
	while (*end >= 0)
	{
		if (!ft_set(s1[*end], set))
			break ;
		(*end)--;
	}
	while (*start < ft_strlen(s1))
	{
		if (!ft_set(s1[*start], set))
			break ;
		(*start)++;
	}
	if ((int)(*start) >= (*end))
		len = 0;
	else
		len = (size_t)(*end - *start + 1);
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	int		end;
	char	*new;
	size_t	z;

	start = 0;
	end = 0;
	new = malloc(trim(s1, set, &start, &end) * sizeof(char) + 1);
	if (!new)
		return (NULL);
	z = 0;
	if (end == -1)
		return (ft_strdup(""));
	while (start <= (size_t)end)
	{
		new[z] = s1[start];
		start++;
		z++;
	}
	new[z] = '\0';
	return (new);
}
