/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/21 14:34:30 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft.h"
#include "templib.h"

void	test_input(const char *s, char *input, size_t len);

int	main(int argc, char **argv)
{
	int			i;
	const char	s[] = "123456789";
	size_t		len;

	len = 8;
	write(1, "string: ", 8);
	ft_putstr(s);
	write(1, "\n", 1);
	if (argc == 1)
		test_input(s, NULL, len);
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			test_input(s, &argv[i][0], len);
			i++;
		}
	}
	else
	{
		write(2, "Input error", 11);
	}
	return (0);
}

void	test_input(const char *s, char *input, size_t len)
{
	write(1, "lenth: ", 7);
	ft_putnbr(len);
	write(1, "\n", 1);
	if (ft_strnstr(s, input, len) == NULL)
		write(1, "NULL", 4);
	else
		ft_putstr(ft_strnstr(s, input, len));
}
