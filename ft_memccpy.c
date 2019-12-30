/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 04:22:43 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 04:22:44 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Copies bytes from string src to dst. If unsigned char c occurs in src,
**	then the copy stops.
**	Return: a pointer to the byte after the copy of c in the str dst
**		Otherwise, n bytes are copies & a NULL ptr is returned
*/

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;

	if ((!dst && !src))
		return (NULL);
	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		cdst[i] = csrc[i];
		if (csrc[i] == (unsigned char)c)
		{
			return (&cdst[i + 1]);
		}
		i++;
	}
	return (NULL);
}
