/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/15 11:57:01 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>
#include "../libft.h"

void	test_input(char input);
void	ft_putnbr(int nb);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		test_input('\0');
	else if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			test_input(argv[i][0]);
			i++;
		}
	}
	else
	{
		write(2, "Input error", 11);
	}
	return (0);
}

void	test_input(char input)
{
	if ((isalpha(input) == 0) == (ft_isalpha(input) == 0))
	{
		write(1, "\npass ", 6);
		ft_putnbr(isalpha(input));
		write(1, " ", 1);
		ft_putnbr(ft_isalpha(input));
	}
	else
	{
		write(1, "\nisalpha: ", 10);
		ft_putnbr(isalpha(input));
		write(1, "\nMy function: ", 14);
		ft_putnbr(ft_isalpha(input));
	}
	return ;
}

void	ft_putnbr(int nb)
{
	long int	lnb;
	char		digit;

	lnb = nb;
	if (lnb < 0)
	{
		write(1, "-", 1);
		lnb = -lnb;
	}
	if (lnb > 9)
	{
		ft_putnbr(lnb / 10);
	}
	digit = lnb % 10 + '0';
	write(1, &digit, 1);
}
