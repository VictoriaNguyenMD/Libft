/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:10:39 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 12:10:41 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Sets every character of the string to \0
** Return: none
*/

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		s[i] = '\0';
		i++;
	}
}
