#include "libft.h"

/*
It dynamically allocates memory for a new node in a linked list,
initializes its content, and returns a pointer to the newly created node
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (0);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}