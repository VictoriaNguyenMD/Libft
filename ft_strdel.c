/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:05:10 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/10 12:05:17 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes the address of a str that needs to be freed using free(3)
**	Set the pointer to NULL
**	Return: none
*/

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as && *as)
		ft_memdel((void**)as);
}
