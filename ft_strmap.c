/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:33:55 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 12:33:57 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Applies function f to each char of s to create a new string
**	resulting from the successive applications of f
**	Param: string to map, function to apply to each char of s
**	Return: fresh string created from the successive apps of f
*/

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		len;
	int		i;
	char	*output;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	output = ft_memalloc(len + 1);
	if (!output)
		return (NULL);
	while (i < len)
	{
		output[i] = f(s[i]);
		i++;
	}
	return (output);
}
