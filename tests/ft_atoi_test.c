/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/21 16:01:53 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft.h"
#include "templib.h"

void	test_input(const char *input);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		test_input(NULL);
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			write(1, "string: ", 8);
			ft_putstr(argv[1]);
			write(1, "\n", 1);
			test_input(argv[i]);
			i++;
		}
	}
	else
	{
		write(2, "Input error", 11);
	}
	return (0);
}

void	test_input(const char *input)
{
	if (atoi(input) == ft_atoi(input))
		write(1, "\nPASS\n", 6);
	write(1, "\natoi: ", 7);
	ft_putnbr(atoi(input));
	write(1, "\nMy function: ", 14);
	ft_putnbr(ft_atoi(input));
}
