/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:02:21 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/27 16:30:20 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>
#include <stdlib.h>

void	test_input(char *input);
void	print_list(t_list *head);

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		test_input(NULL);
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
	t_list		*head, *new;
	t_list		n1, n2, n3;
	const char	*str = "12345";

	head = &n1;
	n1.content = (void *) &str[0];
	n1.next = &n2;
	n2.content = (void *) &str[1];
	n2.next = &n3;
	n3.content = (void *) &str[2];
	n3.next = NULL;
	print_list(head);
	new = ft_lstnew(input);
	ft_lstadd_back(&head, new);
	print_list(head);
	free(new);
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
