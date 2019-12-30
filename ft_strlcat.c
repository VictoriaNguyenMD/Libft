/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 00:57:47 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 00:57:48 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Appends string src to dst. Append at most dstsize - strlen(dst) -1
**	w/ a null terminator \0 unless dstsize = 0 or len(dst) > dstsize
**	If src & dst overlap, then the behavior is undefined
**	Unlike strncat, dstsize is the FULL size of dst, not the space remaining
** Input:
**		char * restrict dst, const char * restrict src, size_t dstsize
** Return:
**		len of the str they TRIED to create (length of dest + length of src)
*/

/*
**	If dstsize <= len(dst), then len(src) + size,
**	else len(src) + len(dst) to obtain the smallest destination output
*/

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t i;
	size_t j;
	size_t len;

	i = 0;
	j = 0;
	len = 0;
	while (dst[i] != '\0')
		i++;
	while (src[len] != '\0')
		len++;
	if (size <= i)
		len += size;
	else
		len += i;
	while ((src[j] != '\0') && ((i + j) < size - 1) && (size > 0))
	{
		dst[(j + i)] = src[j];
		j++;
	}
	if (size != 0)
	{
		dst[(j + i)] = '\0';
	}
	return (len);
}

/*
** 1) i = len(dst)
** 2) len = len(src)
** 3) If the len(dst) is less than the size, return the TRIED size
**							+ len(src) since this is what may be created
** 4) Else, len = len(dst) + len(src)
** 5) While src has a value, size is greater than 0, and current
**						size is less than the total size, then concatenate
** 6) If the size is not 0 then add a terminating character
*/
