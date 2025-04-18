/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/18 15:54:22 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "../libft.h"

void	ft_putnbr(int nb);

int	main(void)
{
	char	dest[10];
	const char	src[] = "123456789";
	int	n;
	size_t	len;

	n = 15;
	len = ft_strlcpy(dest, src, n);
	write(1, "length is ", 10);
	ft_putnbr(len);
	write(1, "\n", 1);
	write(1, dest, len);
	if (dest[len] == '\0')
		write(1, "\nis null-terminated", 19);
	else
		write(2, "\nnot null-terminated", 20);
	return (0);
}

void	ft_putnbr(int nb)
{
	long int	lnb;
	char		digit;

	lnb = nb;
	if (lnb < 0)
	{
		write(1, "-", 1);
		lnb = -lnb;
	}
	if (lnb > 9)
	{
		ft_putnbr(lnb / 10);
	}
	digit = lnb % 10 + '0';
	write(1, &digit, 1);
}
