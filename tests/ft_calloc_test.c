/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 18:14:07 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/30 13:39:41 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../libft.h"

bool	compare(void *s1, void *s2, int n);

int	main(void)
{
	size_t	nmemb;
	size_t	size;
	void	*p1;
	void	*p2;

	nmemb = 10;
	size = sizeof(int);
	p1 = calloc(nmemb, size);
	p2 = ft_calloc(nmemb, size);
	if (compare(p1, p2, nmemb))
		write(1, "\nPASS\n", 6);
	free(p1);
	free(p2);
	return (0);
}

bool	compare(void *s1, void *s2, int n)
{
	int				i;
	unsigned char	*char_s1;
	unsigned char	*char_s2;

	char_s1 = (unsigned char *) s1;
	char_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (char_s1[i] != char_s2[i])
			return (false);
		i++;
	}
	return (true);
}
