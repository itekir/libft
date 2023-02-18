/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itekir <itekir@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 00:20:09 by itekir            #+#    #+#             */
/*   Updated: 2023/01/21 01:20:53 by itekir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (str1 == NULL && len == 0)
	{
		return (0);
	}
	if (str2[0] == '\0')
		return ((char *)str1);
	while (str1[h] != '\0')
	{
		n = 0;
		while (str1[h + n] == str2[n] && (h + n) < len)
		{
			if (str1[h + n] == '\0' && str2[n] == '\0')
				return ((char *)&str1[h]);
			n++;
		}
		if (str2[n] == '\0')
			return ((char *)str1 + h);
		h++;
	}
	return (0);
}
