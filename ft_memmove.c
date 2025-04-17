/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 18:40:37 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/17 14:58:54 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = n - 1;
	while (i > 0)
	{
		if (&src[i] == dest)
		{
			i = n - 1;
			while (i >= 0)
			{
				dest[i] = src[i];
				i--;
			}
			return (dest);
		}
		i--;
	}
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
