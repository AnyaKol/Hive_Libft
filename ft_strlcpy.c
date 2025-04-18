/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:03:57 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/18 19:50:55 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
			dst[i] = src[i];
		i++;
	}
	if (i < size - 1)
			size = i + 1;
	if (size >= 0)
		dst[size] = '\0';
	return (i);
}
