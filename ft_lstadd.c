/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:22:21 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 09:22:22 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Adds the element new at the beg of the list
**	Param #1: The adress of a pointer to the first link of a list
**	Param #2: The link to add at the beginning of the list
*/

#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (alst && *alst)
		new->next = *alst;
	*alst = new;
}
