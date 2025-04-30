/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:41:28 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/30 12:25:14 by akolupae         ###   ########.fr       */
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
	memmove((void *) &s1[2], (void *) &s1[4], 4);
	ft_memmove((void *) &s2[2], (void *) &s2[4], 4);
	if (compare((char *) &s1[0], (char *) &s2[0], n))
		write(1, "\nPASS\n", 6);
	write(2, "\nmemmove:\n", 10);
	write(2, &s1[0], n);
	write(2, "\nMy function:\n", 14);
	write(2, &s2[0], n);
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
