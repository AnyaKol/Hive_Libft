/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/18 15:36:56 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "../libft.h"

int	main(void)
{
	char	dest[10];
	const char	src[] = "abcd";
	size_t	size;
	int	n;

	n = 3;
	size = ft_strlcpy(dest, src, 3);
	write(1, dest, 3);
	if (dest[n - 1] == '\0')
		write(1, "\nis null-terminated", 19);
	else
		write(1, "\nnot null-terminated", 20);
	return (0);
}
