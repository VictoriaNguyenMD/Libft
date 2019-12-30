/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 07:53:51 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 07:53:53 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Uses malloc(3) to allocate and return a fresh string ending with \0.
** Each char of the string is initalized at \0. If the alloc fails, return NULL
** Param: size of string
** Return: string allocated & initalized to 0
*/

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*output;
	size_t	i;

	i = 0;
	output = (char*)malloc(sizeof(char) * (size + 1));
	if (!output)
		return (NULL);
	while (i < size)
	{
		output[i] = '\0';
		i++;
	}
	output[i] = '\0';
	return (output);
}
