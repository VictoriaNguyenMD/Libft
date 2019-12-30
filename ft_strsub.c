/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 23:27:10 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 23:27:12 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Alloc using malloc(3) and returns new substring. Substring begins with
** index start and is of size len. If start and len aren't referring to a valid
** substring, the behavior is undefined. If the alloc fails, return NULL
** Param: string, start index of substring, size of substring
** Return: substring
*/

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = (char*)malloc(sizeof(char) * (len + 1));
	if (!s || !substr)
		return (NULL);
	while (i < len && s[start])
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
