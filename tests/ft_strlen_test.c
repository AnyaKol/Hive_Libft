/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/16 18:09:15 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "../libft.h"

void	test_input(const char *input);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		test_input("");
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

void	test_input(const char *input)
{
	if (strlen(input) == ft_strlen(input))
		write(1, "\nPASS\n", 6);
	write(1, "\nstrlen: ", 10);
	ft_putnbr_fd(strlen(input), 1);
	write(1, "\nMy function: ", 14);
	ft_putnbr_fd(ft_strlen(input), 1);
}
