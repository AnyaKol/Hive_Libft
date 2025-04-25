/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:36:06 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/25 09:42:50 by akolupae         ###   ########.fr       */
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
	char	c;
	char	**split;
	int		i;

	c = '.';
	write(1, "separator: ", 11);
	ft_putchar_fd(c, 1);
	write(1, "\n", 1);
	split = ft_split(input, c);
	i = 0;
	while (split[i] != NULL)
	{
		ft_putendl_fd(split[i], 1);
		free(split[i]);
		i++;
	}
	free(split[i]);
	free(split);
	return ;
}
