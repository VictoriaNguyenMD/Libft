/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:34:27 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 11:34:28 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends null-terminated s2 to null-terminated s1 and adds '\0'.
**	Will not append more than n characters from s2
** Input:
**		char *restrict s1, const char *restrict s2, size_t n
** Return:
**		pointer to s1
*/

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j] && j < n)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
