/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:58:26 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/08 20:58:32 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Copies len bytes from src to dst. Two strings may overlap.
**	Copy done in nondestructive manner.
**  Memmove is better than memcpy because there is no overwriting
**	Returns: the value of dst
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*cdst;
	unsigned char	*csrc;
	size_t			i;

	if (dst == src)
		return (dst);
	if (dst < src)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		cdst = (unsigned char*)dst;
		csrc = (unsigned char *)src;
		i = 0;
		while (len > 0)
		{
			len--;
			cdst[len] = csrc[len];
		}
	}
	return (dst);
}

/*
** The if statement will run if arr[i] = arr[i + 1] (the ad of dst < src)
** Else will run if arr[i + 1] = arr[i]. We need to do it this way, else the
** array will be altered and the original source will be destroyed
** Example:
** int arr[5] = {11, 22, 33, 44, 55}
** arr == {22, 22, 22, 22, 22} instead of arr == {22, 22, 33, 44, 55}
*/
