/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:36:06 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/24 21:47:20 by akolupae         ###   ########.fr       */
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
	char		*s_trim;
	char const	*set = " .1";

	s_trim = ft_strtrim(input, set);
	write(1, "set: ", 5);
	ft_putendl_fd((char *) set, 1);
	ft_putendl_fd(s_trim, 1);
	free(s_trim);
	return ;
}
