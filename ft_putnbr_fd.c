/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 05:08:04 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 05:08:08 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	out;
	long	lnum;

	lnum = (long)n;
	if (lnum < 0)
	{
		write(fd, "-", 1);
		lnum *= -1;
	}
	if (lnum < 10)
	{
		out = lnum % 10 + '0';
		write(fd, &out, 1);
		return ;
	}
	else
	{
		ft_putnbr_fd(lnum / 10, fd);
		out = lnum % 10 + '0';
		write(fd, &out, 1);
	}
}
