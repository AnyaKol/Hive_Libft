/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/18 15:09:12 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include "../libft.h"

bool	compare(char *s1, char *s2, int n);

int	main(void)
{
	size_t		n;
	const char	s1[] = "00001234";
	const char	s2[] = "00001234";

	n = 8;
	memmove(&s1[2], &s1[4], 4);
	ft_memmove(&s2[2], &s2[4], 4);
	if (compare(s1, s2, n))
	{
		write(1, "\npass\n", 6);
		write(1, s1, n);
		write(1, "\n", 1);
		write(1, s2, n);
	}
	else
	{
		write(2, "\nmemmove:\n", 10);
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
