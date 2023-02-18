/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itekir <itekir@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:59:14 by itekir            #+#    #+#             */
/*   Updated: 2022/11/22 01:26:34 by itekir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t	a;

	a = 0;
	while (a < n)
	{
		if (*(unsigned char *)(ptr1 + a) != *(unsigned char *)(ptr2 + a))
			return (*(unsigned char *)(ptr1 + a)
			- *(unsigned char *)(ptr2 + a));
		a++;
	}
	return (0);
}
