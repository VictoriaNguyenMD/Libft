/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 04:56:07 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 04:56:18 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocates (with malloc(3)) and returns a “fresh” memory area.
** The memory allocated is initialized to 0. If the allocation fails,
**	the function returns NULL
** Return: allocated memory area
*/

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*output;
	size_t			i;

	if (!size || size >= ULONG_MAX)
		return (NULL);
	output = (unsigned char*)malloc((size));
	i = 0;
	if (!output)
		return (NULL);
	else
	{
		while (i < (size))
		{
			output[i] = 0;
			i++;
		}
	}
	return (output);
}
