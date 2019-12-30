/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 23:21:28 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 23:21:29 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Lexicographical comparisons between s1 and s2 up until n char or \0
** If the 2 strings are identifcal, the functions reterns 1, otherwise 0.
** Param: 1st string, 2nd string
** Return: 1 if identical, 0 if not
*/

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if ((!s1 && !s2) || n == 0)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (i < n - 1 && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (1);
	}
	return (0);
}
