/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 21:58:37 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/19 22:45:24 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		z;
	char	*str;

	z = 0;
	if (!s || !f)
		return (ft_strdup(""));
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (s[z] != '\0')
	{
		str[z] = (*f)(z, s[z]);
		z++;
	}
	str[z] = '\0';
	return (str);
}
