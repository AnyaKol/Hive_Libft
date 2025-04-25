/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 20:35:57 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/24 20:50:30 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "../libft.h"

void	test_input(char *input);

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
		write(2, "Input error", 11);
	return (0);
}

void	test_input(char *input)
{
	int			n;
	const char	*str = "12345";

	n = 4;
	if (strncmp(input, str, n) == ft_strncmp(input, str, n))
		write(1, "PASS\n", 5);
	write(1, "string 1: ", 10);
	ft_putendl_fd((char *) str, 1);
	write(1, "string 2: ", 10);
	ft_putendl_fd((char *) input, 1);
	write(1, "strncmp: ", 9);
	ft_putnbr_fd(strncmp(input, str, n), 1);
	write(1, "\nMy function: ", 14);
	ft_putnbr_fd(ft_strncmp(input, str, n), 1);
	return ;
}
