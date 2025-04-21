/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/19 17:25:35 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "../libft.h"
#include "templib.h"

void	test_input(const char *s, char input);

int	main(int argc, char **argv)
{
	int			i;
	const char	s[] = "123456789";

	write(1, "string: ", 8);
	ft_putstr(s);
	write(1, "\n", 1);
	if (argc == 1)
		test_input(s, '\0');
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			test_input(s, argv[i][0]);
			i++;
		}
	}
	else
	{
		write(2, "Input error", 11);
	}
	return (0);
}

void	test_input(const char *s, char input)
{
	if ((strchr(s, input) == 0) == (ft_strchr(s, input) == 0))
		write(1, "\nPASS\n", 6);
	write(1, strchr(s, input), 1);
	write(1, " ", 1);
	write(1, ft_strchr(s, input), 1);
	return ;
}
