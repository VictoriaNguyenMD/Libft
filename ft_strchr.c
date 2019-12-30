/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 00:42:06 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 00:42:07 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurence of c in a string. The null character \0
**	is part of the string
** Input: const char s, int c
** Return:
**		ptr to located char
**		NULL if not in the string
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s != '\0') && (*s != c))
	{
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return ((char*)NULL);
}
