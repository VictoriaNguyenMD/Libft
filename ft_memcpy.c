/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 14:47:23 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 14:47:25 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies n bytes from the memory are src to memory area dst
** Returns: dst
*/

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	cdst = (unsigned char*)dst;
	csrc = (unsigned char*)src;
	i = 0;
	if ((!dst && !src))
		return (NULL);
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
