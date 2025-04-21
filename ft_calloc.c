/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 16:16:54 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/21 17:58:23 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (nmemb * size > (size_t) INT_MAX || nmemb * size == 0)
		return (NULL);
	mem = malloc (nmemb * size);
	if (mem == NULL)
		return (mem);
	ft_memset(mem, 0, nmemb * size);
	return (mem);
}
