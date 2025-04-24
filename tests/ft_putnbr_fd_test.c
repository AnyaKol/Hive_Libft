/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:06:25 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/24 20:11:56 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft.h"
#include <limits.h>

int	main(void)
{
	int	n;

	n = INT_MIN;
	write(1, "fd = 1: ", 8);
	ft_putnbr_fd(n, 1);
	write(1, "\nfd = 2: ", 9);
	ft_putnbr_fd(n, 2);
	return (0);
}
