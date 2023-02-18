/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itekir <itekir@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 03:16:08 by itekir            #+#    #+#             */
/*   Updated: 2023/01/21 01:01:01 by itekir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*aa;
	unsigned int	bb;

	if (!s)
		return (0);
	aa = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!aa)
		return (0);
	bb = 0;
	while (s[bb])
	{
		aa[bb] = f(bb, s[bb]);
		++bb;
	}
	aa[bb] = 0;
	return (aa);
}
