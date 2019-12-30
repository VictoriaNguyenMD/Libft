/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:11:11 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 13:11:13 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies the string src to dst until n characters
** If src is less than len characters long, the remainder of dst
**	is filled with `\0'
** characters.  Otherwise, dst is not terminated. If stpncpy() does not
**	terminate dst with a NUL character, it instead returns a pointer
**	to dst[n]
**		(which does not necessarily refer to a valid memory location.)
** Return: returns dst
*/

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
