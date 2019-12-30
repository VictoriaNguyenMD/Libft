/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 22:55:05 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/30 22:55:08 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurence of the null-terminated string needle in the
** haystack. Only len chars searched
** const char *haystack, const char *needle, size_t len)
** Return:
**		needle == '\0' -> haystack
**		needle not in haystack -> NULL
**		otherwise, pointer to first char of the first occurence of needle
*/

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*c1;
	const char	*c2;
	int			traverse;
	size_t		count;

	c1 = haystack;
	c2 = needle;
	traverse = 0;
	count = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (*c1 != '\0' && *c2 != '\0' && count++ <= len)
	{
		if (*c1 == *c2)
		{
			while ((*(c1 + traverse) == *(c2 + traverse)) && count++ <= len)
			{
				if (*(c2 + traverse + 1) == '\0')
					return ((char*)c1);
				traverse++;
			}
		}
		c1++;
	}
	return (NULL);
}
