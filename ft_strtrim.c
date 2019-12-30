/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 00:21:03 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 00:21:06 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocate w/ malloc(3) and return copy of the str given as argument w/o
**	whitespaces at the beginner or at the end of the string. The following are
**	considered whitespaces: ' ', '\n', '\t'. If s has no whitespaces at beg
**	or the end, the fucntion returns a copy of s. If alloc fails, then NULL.
**	Param: str to trim9
**	Return: fresh trimmed string or copy of s
*/

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		len;

	if (!s)
		return (NULL);
	len = (ft_strend((char*)s) - ft_strstart((char*)s) + 1);
	if (len < 0)
		len = 0;
	if (len == 0)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	str = ft_strsub((char*)s,
	(unsigned int)ft_strstart((char*)s), (size_t)len);
	if (!str)
		return (NULL);
	return (str);
}
