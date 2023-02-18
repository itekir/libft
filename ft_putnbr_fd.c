/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itekir <itekir@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 03:34:53 by itekir            #+#    #+#             */
/*   Updated: 2022/11/25 18:33:39 by itekir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	c;

	i = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -1;
	}
	if (n / 10)
		ft_putnbr_fd(n / 10 * i, fd);
	c = '0' + n % 10 * i;
	ft_putchar_fd(c, fd);
}
