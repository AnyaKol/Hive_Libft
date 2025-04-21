/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/21 13:43:36 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft.h"
#include "templib.h"

int	main(void)
{
	char		dest[20];
	const char	src[] = "123456789";
	size_t		n;
	size_t		len;

	n = 5;
	len = ft_strlcpy(dest, src, n);
	write(1, "length: ", 8);
	ft_putnbr(len);
	write(1, "\n", 1);
	write(1, "size passed: ", 13);
	ft_putnbr(n);
	write(1, "\n", 1);
	if (n > len + 1)
		n = len + 1;
	else if (n == 0)
		n = 1;
	write(1, "dest: ", 6);
	ft_putstr(dest);
	if (dest[n - 1] == '\0')
		write(1, "\nis null-terminated", 19);
	else
		write(2, "\nnot null-terminated", 20);
	return (0);
}
