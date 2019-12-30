/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 02:39:13 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 02:39:13 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Outputs the string s to the standard output
**	Param: string
** REturn: none
*/

#include "libft.h"

void	ft_putstr(char const *s)
{
	if (!s)
		return ;
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
}
