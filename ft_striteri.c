/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:28:16 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 12:28:32 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies function f to each char of string s. Passes its index as first arg.
** Each character is passed by address to f to be modified if necessary
** param: string to iteratre, function to apply to each character of s and its i
** Return: none
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
