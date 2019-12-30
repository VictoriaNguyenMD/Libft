/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 09:22:01 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/11 09:22:07 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes the link's pointer address and frees the memory of the link's content
**	using teh del given as parameter, then frees the link's memory using free 3.
**	The memory of next must not be freed under any circumstane. Finally, the
**	pointer ot the link that was just freed must be set to NULL (quite similar
**	to the function ft_memdel in the mandatory part).
**	Param: Address of a pointer to a link that needs to be freed
*/

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del) (void*, size_t))
{
	if (!alst || !*alst || !del)
		return ;
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void**)alst);
}
