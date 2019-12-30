/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 00:05:06 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 00:05:09 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the last occurence of c in a string. The null character \0
**	is part of the string
** Input: const char s, int c
** Return:
**		ptr to located char
**		NULL if not in the string
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i] != c && i >= 0)
	{
		i--;
	}
	if (i < 0)
		return ((char*)NULL);
	else
		return ((char*)(s + i));
}
