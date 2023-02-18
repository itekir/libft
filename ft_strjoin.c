/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itekir <itekir@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 02:23:51 by itekir            #+#    #+#             */
/*   Updated: 2022/11/08 02:28:19 by itekir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*abc;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	abc = malloc(sizeof(char) * (len +1));
	if (!abc)
		return (0);
	ft_strlcpy (abc, s1, len + 1);
	ft_strlcat (abc, s2, len + 1);
	return (abc);
}
