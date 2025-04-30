/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolupae <akolupae@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:02:21 by akolupae          #+#    #+#             */
/*   Updated: 2025/04/27 19:27:59 by akolupae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>
#include <stdlib.h>

void	del(void *ptr);
void	print_list(t_list *head);

int	main(void)
{
	t_list	*head, *n1, *n2, *n3;
	char	*c1, *c2, *c3;

	head = NULL;
	c1 = malloc(sizeof(char));
	*c1 = 'a';
	c2 = malloc(sizeof(char));
	*c2 = 'b';
	c3 = malloc(sizeof(char));
	*c3 = 'c';
	n1 = ft_lstnew((void *) c1);
	n2 = ft_lstnew((void *) c2);
	n3 = ft_lstnew((void *) c3);
	ft_lstadd_back(&head, n1);
	ft_lstadd_back(&head, n2);
	ft_lstadd_back(&head, n3);
	print_list(head);
	ft_lstdelone(n2, del);
	n1->next = n3;
	print_list(head);
	del(n1);
	del(n2);
	del(n3);
	free(n1);
	free(n2);
	free(n3);
	return (0);
}

void	del(void *content)
{
	if (content == NULL)
		return ;
	free(content);
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
