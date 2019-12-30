/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 02:56:19 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 02:56:21 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Outputs the integer n to the standard output.
**	Param: integer
*/

#include "libft.h"

void	ft_putnbr(int n)
{
	int		out;
	long	lnum;

	lnum = (long)n;
	if (lnum < 0)
	{
		write(1, "-", 1);
		lnum *= -1;
	}
	if (lnum < 10)
	{
		out = lnum % 10 + '0';
		write(1, &out, 1);
		return ;
	}
	else
	{
		ft_putnbr(lnum / 10);
		out = lnum % 10 + '0';
		write(1, &out, 1);
	}
}
