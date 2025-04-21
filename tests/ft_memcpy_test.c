/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/18 15:14:19 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdbool.h>
#include "../libft.h"

bool	compare(char *s1, char *s2, int n);

int	main(void)
{
	int		c;
	size_t	n;
	char	s[10];
	char	d1[10];
	char	d2[10];

	c = 97;
	n = 4;
	memset(s, c, n);
	memcpy(d1, s, n);
	ft_memcpy(d2, s, n);
	if (compare(d1, d2, n))
		write(1, "\nPASS\n", 6);
	write(2, "\nmemcpy:\n", 9);
	write(2, d1, n);
	write(2, "\nMy function:\n", 14);
	write(2, d2, n);
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
