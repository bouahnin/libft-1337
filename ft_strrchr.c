/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:59:19 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/17 14:26:12 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	z;

	len = ft_strlen(s);
	z = 0;
	while (len > 0)
	{
		len--;
		if (s[len] == (char)c)
		{
			return ((char *)(s + len));
		}
	}
	if (c == '\0')
		return ((char *)(s + ft_strlen(s)));
	return (NULL);
}
