/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 05:05:39 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 05:05:41 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Outputs the string s to the fd folowed by '\n'
*/

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		write(fd, s, (int)ft_strlen(s));
		write(fd, "\n", 1);
	}
}
