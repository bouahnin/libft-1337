/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:59:19 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 18:53:41 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0)
	{
		if ((unsigned char)s[len - 1] == (unsigned char)c)
			return ((char *)(s + len - 1));
		len--;
	}
	if ((unsigned char)c == '\0')
		return ((char *)(s + ft_strlen(s)));
	return (NULL);
}
