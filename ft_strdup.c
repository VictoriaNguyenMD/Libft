/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 13:40:24 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 13:40:26 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** A function that allocates memory for a copy of the string s1, does
**	the cpy and returns the ptr
** If insufficient memory is available, NULL is returned and errno is
**	set to ENOMEN
** Return: ptr to copy
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		ls1;
	int		i;
	char	*s2;

	ls1 = 0;
	i = 0;
	while (s1[i])
	{
		ls1++;
		i++;
	}
	s2 = malloc(sizeof(*s1) * (ls1 + 1));
	i = 0;
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
