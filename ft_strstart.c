/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 01:32:00 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 01:37:10 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strstart(char *s)
{
	int i;

	i = 0;
	while (ft_iswhitespace(s[i]))
		i++;
	return (i);
}
