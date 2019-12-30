/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:19:21 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 12:19:23 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Applies the function f to each char of the str passed as arg
** Each char is passed by add to f to be modified if necessary
** Param: (string to iterate, function to apply to each char of s)
** Return: None
*/

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(&s[i]);
		i++;
	}
}
