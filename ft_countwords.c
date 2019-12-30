/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 05:36:54 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 05:36:58 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char *s, char dl)
{
	int count;
	int start;

	count = 0;
	start = 0;
	while (s && *s)
	{
		if (*s == dl)
		{
			s++;
		}
		else
		{
			count++;
			while (*s && *s != dl)
			{
				s++;
			}
		}
	}
	return (count);
}
