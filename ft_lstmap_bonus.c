/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:17:45 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/24 18:40:38 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	(void) del;
	new_lst = ft_lstnew(f(lst));
	lst = lst->next;
	while (lst != NULL)
	{
		ft_lstadd_back(&new_lst, ft_lstnew(f(lst)));
		lst = lst->next;
	}
	return (new_lst);
}
