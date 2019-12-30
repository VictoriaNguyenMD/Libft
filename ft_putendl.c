/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 02:47:14 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 02:48:44 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Outputs the string s to the standard output folowed by '\n'
*/

#include "libft.h"

void	ft_putendl(char const *s)
{
	if (s)
	{
		write(1, s, (int)ft_strlen(s));
		write(1, "\n", 1);
	}
}
