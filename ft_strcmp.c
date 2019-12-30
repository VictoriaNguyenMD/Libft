/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 22:51:42 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/30 22:51:51 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares null-terminated strings
** Input: const char *s1, const char *s2
** Return:
**		>0 if s1 > s2
**		0  if s1 == s2
**		<-1 if s1 < s2
*/

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t count;

	count = 0;
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
