/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:56:53 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 13:28:41 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(char const *s, char c)
{
	size_t	count;
	size_t	z;

	count = 0;
	z = 0;
	while (s[z])
	{
		while (s[z] && s[z] == c)
			z++;
		if (s[z] && s[z] != c)
		{
			count++;
			while (s[z] && s[z] != c)
				z++;
		}
	}
	return (count);
}

static void	*free_split(char **new, int h)
{
	while (h > 0)
		free(new[--h]);
	free(new);
	return (NULL);
}

static int	skip_word(char const*s, char c, int z)
{
	while (s[z] && s[z] != c)
		z++;
	return (z);
}

static int	skip_sp(char const *s, char c, int z)
{
	while (s[z] && s[z] == c)
		z++;
	return (z);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		z;
	int		h;
	int		start;

	if (!s)
		return (NULL);
	new = malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!new)
		return (NULL);
	z = 0;
	h = 0;
	while (s[z])
	{
		z = skip_sp(s, c, z);
		if (s[z] && s[z] != c)
		{
			start = z;
			z = skip_word(s, c, z);
			new[h] = ft_substr(s, start, z - start);
			if (!new[h++])
				return (free_split(new, h));
		}
	}
	return (new[h] = NULL, new);
}
