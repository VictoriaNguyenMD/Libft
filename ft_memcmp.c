/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 04:01:26 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 04:01:28 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long
** Return: 0 if s1==s2.
** 		Otherwise, return the difference between the first two diff bytes
**		Treated as unsigned char values
** 		size_t == 0 strings are always equal to each other
*/

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = (size_t)0;
	if (n == (size_t)0)
		return (0);
	while (i < n && (((unsigned char*)s1)[i] == ((unsigned char*)s2)[i]))
		i++;
	if (i == n)
		return (0);
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
