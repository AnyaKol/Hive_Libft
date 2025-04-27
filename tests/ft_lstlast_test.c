/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:02:21 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/27 16:46:55 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

void	print_list(t_list *head);

int	main(void)
{
	t_list	*head, *last;
	t_list	n1, n2, n3;
	const char	*str = "12345";

	head = &n1;
	n1.content = (void *) &str[0];
	n1.next = &n2;
	n2.content = (void *) &str[1];
	n2.next = &n3;
	n3.content = (void *) &str[2];
	n3.next = NULL;
	print_list(head);
	last = ft_lstlast(head);
	write(1, "last: ", 6);
	write(1, last->content, 1);
	return (0);
}

void	print_list(t_list *head)
{
	t_list	*temp;

	temp = head;
	while (temp != NULL)
	{
		write(1, temp->content, 1);
		temp = temp->next;
	}
	write(1, "\n", 1);
}
