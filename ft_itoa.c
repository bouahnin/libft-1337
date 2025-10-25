/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bouahnin <bouahnin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 02:33:47 by bouahnin          #+#    #+#             */
/*   Updated: 2025/10/25 13:32:12 by bouahnin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n(long n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	long	ne;

	count = count_n(n);
	ne = n;
	if (ne < 0)
		count++;
	str = malloc(sizeof(char) * (count + 1));
	if (!str)
		return (NULL);
	str[count--] = '\0';
	if (ne < 0)
		str[0] = '-';
	if (ne < 0)
		ne = -ne;
	if (ne == 0)
		str[0] = '0';
	while (ne > 0)
	{
		str[count--] = (ne % 10) + 48;
		ne /= 10;
	}
	return (str);
}
