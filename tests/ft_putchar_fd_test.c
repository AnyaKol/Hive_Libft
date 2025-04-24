/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 19:48:26 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/24 19:51:00 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft.h"

void	test_input(char *input);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		test_input("\0");
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
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

void	test_input(char *input)
{
	int	i;

	i = 0;
	while (input[i] != '\0')
	{
		ft_putchar_fd(input[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
