/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 07:04:19 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 07:04:21 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Allocate using malloc 3. Return fresh str ending with \0
**	representing the integer n given as argument.
**	Negative numbers must be supported. If alloc fails, returns NULL
*/

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	int		nlen;
	long	ln;

	ln = (long)n;
	nlen = ft_nbrlen(n);
	if (n < 0)
	{
		nlen++;
		ln *= -1;
	}
	str = ft_memalloc((nlen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[nlen] = '\0';
	while (nlen-- >= 1)
	{
		str[nlen] = (ln % 10) + '0';
		ln /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
