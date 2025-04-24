/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:38:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/24 17:44:28 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;

	if (lst == NULL)
		return (0);
	len = 1;
	while (lst->next != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
