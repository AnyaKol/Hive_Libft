/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 18:59:44 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/25 13:02:18 by akolupae         ###   ########.fr       */
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
	char	*str;
	int		n;

	n = ft_atoi(input);
	write(1, "atoi: ", 6);
	ft_putnbr_fd(n, 1);
	write(1, "\nitoa: ", 7);
	str = ft_itoa(n);
	ft_putendl_fd(str, 1);
	if (ft_strncmp(input, str, ft_strlen(input)) == 0)
		write(1, "PASS\n", 5);
	free(str);
	return ;
}
