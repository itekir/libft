/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itekir <itekir@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:37:22 by itekir            #+#    #+#             */
/*   Updated: 2023/01/21 01:28:31 by itekir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	a;
	long int	b;
	long int	c;

	a = 0;
	b = 1;
	c = 0;
	while (((str[a] >= 9 && str[a] <= 13) || str[a] == 32) && str[a])
		a++;
	if (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			b = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = (str[a] - '0') + (c * 10);
		a++;
		if (c * b > 2147483647)
			return (-1);
		if (c * b < -2147483648)
			return (0);
	}
	return (c * b);
}
