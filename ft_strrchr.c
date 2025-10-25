/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:59:19 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 18:14:11 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
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
