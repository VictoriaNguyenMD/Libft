/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:22:39 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 09:22:41 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Iterates through the list 1st and applies the function f to each link
**	Params: pointer to the first link, add of a funct to apply to the links
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst);
			lst = lst->next;
		}
	}
}
