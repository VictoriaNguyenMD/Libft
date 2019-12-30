/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 20:51:40 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/16 22:14:12 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Input: character or integer
**	Return: lower-case letter (if present) or unchanged argument
*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
