/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 12:20:14 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 12:20:17 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copies the string src to dst including \0
** Return: returns dst
** Notes: most people do not use this since src may be bigger than dst
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
