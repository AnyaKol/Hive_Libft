/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/15 14:49:37 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include "../libft.h"

void	test_input(char input);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		test_input('\0');
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			test_input(argv[i][0]);
			i++;
		}
	}
	else
	{
		write(2, "Input error", 11);
	}
	return (0);
}

void	test_input(char input)
{
	if ((isprint(input) == 0) == (ft_isprint(input) == 0))
		write(1, "\nPASS\n", 6);
	write(1, "\nisprint: ", 10);
	ft_putnbr_fd(isprint(input), 1);
	write(1, "\nMy function: ", 14);
	ft_putnbr_fd(ft_isprint(input), 1);
}
