/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 04:29:01 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/12 04:29:02 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes the address of a ptr to to a link and frees the memory of this link
**	and every esuccessors of that link using the functions del and free
**	Finally, the pointer to the link that was just freed must be set to NULL
**	(quite similar to the function ft_memdel)
*/

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *head;

	if (!alst || !*alst || !del)
		return ;
	while (*alst)
	{
		head = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = head;
	}
}
