/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:59:44 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/25 13:34:08 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "../libft.h"

void		test_input(char *input);
static char	f(unsigned int i, char c);

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
	char	*s_iter;

	s_iter = ft_strmapi((const char *) input, f);
	ft_putendl_fd(s_iter, 1);
	free(s_iter);
	return ;
}

static char	f(unsigned int i, char c)
{
	if (i % 2 == 0)
		c = ft_toupper(c);
	return (c);
}
