/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:08:41 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 13:08:44 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Lexicographical comparisons between s1 and s2
** If the 2 strings are identifcal, the functions reterns 1, otherwise 0.
** Param: 1st string, 2nd string
** Return: 1 if identical, 0 if not
*/

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (1);
	}
	return (0);
}
