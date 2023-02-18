/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itekir <itekir@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:37:39 by itekir            #+#    #+#             */
/*   Updated: 2022/11/07 23:45:46 by itekir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	a;

	if (n == 0)
		return (0);
	a = 0;
	while (str1[a] == str2[a] && str1[a] != '\0')
	{
		if (a < (n - 1))
			a++;
		else
			return (0);
	}
	return ((unsigned char)(str1[a]) - (unsigned char)(str2[a]));
}
