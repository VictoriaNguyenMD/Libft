/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 05:09:14 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 05:09:16 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes as a parameter the address of a memory area that needs
** to be freed with free(3), then puts the pointer to NULL.
** Input: A pointer’s address that needs its memory freed and set to NULL
** Return: None
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (!ap)
		return ;
	free(*ap);
	*ap = NULL;
}
