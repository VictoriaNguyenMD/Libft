/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 11:03:06 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/01 11:03:15 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Copy of the null-terminated s2 to null-terminated s1 and then add \0
** Input: char *restrict s1, const char *restrict s2
** Output: pointer to s1
*/

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}
