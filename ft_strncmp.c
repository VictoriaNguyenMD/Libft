/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 15:08:02 by vinguyen          #+#    #+#             */
/*   Updated: 2019/09/30 15:08:03 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Compares null-terminated strings up until n characters
** Input: const char *s1, const char *s2, size_t n
** Return:
**		>0 if s1 > s2
**		0  if s1 == s2
**		<-1 if s1 < s2
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;
	int		diff;

	count = 1;
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && count++ < n)
	{
		s1++;
		s2++;
	}
	diff = ((unsigned char)*s1 - (unsigned char)*s2);
	return (diff);
}
