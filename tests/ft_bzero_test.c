/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/17 20:45:38 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include "../libft.h"

bool	compare(char *s1, char *s2, int n);

int	main(void)
{
	int	c;
	size_t	n;
	char	s1[10];
	char	s2[10];

	c = 97;
	n = 4;
	memset(s1, c, n);
	memset(s2, c, n);
	write(1, s1, n);
	write(1, "\n", 1);
	write(1, s2, n);
	bzero(s1, n);
	ft_bzero(s2, n);
	if (compare(s1, s2, n))
	{
		write(1, "\npass\n", 6);
		write(1, s1, n);
		write(1, "\n", 1);
		write(1, s2, n);
	}
	else
	{
		write(2, "\nbzero:\n", 10);
		write(2, s1, n);
		write(2, "\nMy function:\n", 14);
		write(2, s2, n);
	}
	return (0);
}

bool	compare(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (false);
		i++;
	}
	return (true);
}
