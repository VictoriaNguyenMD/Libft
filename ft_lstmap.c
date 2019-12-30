/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:22:46 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 09:22:47 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Iterates a list lst and applies the function f to each link to create a
**	fresh list using malloc 3 resulting from the successive application of f
**	If the alloc fails, return NULL
**	Params: ptr to the first link of list, add of function to apply
**	Return: new list
*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;

	if (!lst || !f)
		return (NULL);
	new_lst = ft_lstnew(f(lst), sizeof(*lst));
	if (!new_lst)
		return (NULL);
	new_lst = f(lst);
	new_lst->next = ft_lstmap(lst->next, f);
	return (new_lst);
}
