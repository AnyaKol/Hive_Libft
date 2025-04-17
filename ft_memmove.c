/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:40:37 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/17 17:40:31 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*char_src;
	char	*char_dest;

	char_src = (char *) src;
	char_dest = (char *) dest;
	i = n - 1;
	while (i > 0)
	{
		if (&char_src[i] == char_dest)
		{
			i = n - 1;
			while (i >= 0)
			{
				char_dest[i] = char_src[i];
				i--;
			}
			return (dest);
		}
		i--;
	}
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
