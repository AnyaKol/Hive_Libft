/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:59:44 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/24 21:24:18 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
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
		write(2, "Input error", 11);
	return (0);
}

void	test_input(char *input)
{
	char			*sub;
	unsigned int	start;
	size_t			len;

	start = 2;
	len = 3;
	sub = ft_substr(input, start, len);
	write(1, "start: ", 7);
	ft_putnbr_fd(start, 1);
	write(1, "\nlength: ", 9);
	ft_putnbr_fd(len, 1);
	write(1, "\nsubstring: ", 12);
	if (sub != NULL)
		ft_putstr_fd(sub, 1);
	free(sub);
	return ;
}
