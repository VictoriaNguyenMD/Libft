/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 07:25:50 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/08 07:25:52 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Locates the first occurence of c in unsigned char in string s
** Return: ptr to the byte located or NULL i no byte exists within n bytes
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ucs;
	size_t			i;

	ucs = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (ucs[i] == (unsigned char)c)
			return (&ucs[i]);
		i++;
	}
	return (NULL);
}
