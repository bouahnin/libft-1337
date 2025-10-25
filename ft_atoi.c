/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 11:34:28 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 20:07:20 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	n;
	int	z;

	res = 0;
	n = 1;
	z = 0;
	while (str[z] == ' ' || (str[z] >= 9 && str[z] <= 13))
	{
		z++;
	}
	if (str[z] == '-' || str[z] == '+')
	{
		if (str[z] == '-')
			n = -1;
		z++;
	}
	while (str[z] >= '0' && str[z] <= '9')
	{
		res = res * 10 + (str[z] - '0');
		z++;
	}
	return (res * n);
}
