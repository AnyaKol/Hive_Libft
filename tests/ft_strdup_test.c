/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:59:44 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/24 20:58:31 by akolupae         ###   ########.fr       */
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
	char	*s_dup;

	write(1, "string 1: ", 10);
	ft_putendl_fd(input, 1);
	s_dup = ft_strdup((const char *) input);
	write(1, "string 2: ", 10);
	ft_putendl_fd(s_dup, 1);
	if (ft_strncmp(input, s_dup, ft_strlen(input)) == 0)
		write(1, "PASS\n", 5);
	free(s_dup);
	return ;
}
