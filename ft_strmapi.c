/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:48:54 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 12:48:58 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Applies function f to each char of the string passed as arg
** by giving its index as first arg to create a new string using malloc
** resulting from the successive app of f
** Param: string to map, function to apply to each char of s and its index
** Return: the new string
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		len;
	unsigned int		i;
	char				*output;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	output = ft_memalloc(len + 1);
	if (!output)
		return (NULL);
	while (i < len)
	{
		output[i] = f(i, s[i]);
		i++;
	}
	return (output);
}
