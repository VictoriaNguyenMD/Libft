/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 20:04:21 by vinguyen          #+#    #+#             */
/*   Updated: 2019/10/12 20:04:23 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Uses malloc 3 to allocate and return a new link. The vairables content
**	and content_size of the new link are initalized by copy of the parameters
**	of the function. If the parameter content is nul, the variable content is
**	initialized to NULL and the variable content_size is initalized to 0 even
**	if the parameter content_size isn't. The variable next is initalized
**	to NULL. If the alloc fails, the function returns NULL.
*/

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	if (!content)
	{
		node->content = NULL;
		node->content_size = 0;
	}
	else
	{
		node->content = ft_memalloc(content_size);
		if (!(node->content))
		{
			free(node);
			return (NULL);
		}
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	node->next = NULL;
	return (node);
}
