/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:31:25 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/30 15:31:27 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Determines if an integer is an ascii charcter
*/

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
