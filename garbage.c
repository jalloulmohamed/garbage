#include "garbage.h"

t_garbage	*lstlast_garbage(t_garbage *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
	{
		lst = lst -> next;
	}
	return (lst);
}

t_garbage	*new_garbage(void *ptr)
{
	t_garbage	*p;
	p = (t_garbage *) malloc(sizeof(t_garbage));
	if (!p)
		return (0);
	p->ptr = ptr;
	p->next = NULL;
	return (p);
}

void add_to_garbage(void *ptr)
{
    t_garbage 	*new;
    t_garbage	*tmp;

    new = new_garbage(ptr);
    if (garbage)
	{
		tmp = lstlast_garbage((garbage));
		tmp->next = new;
	}
    else
		garbage = new;
}

void	free_garbage()
{

	t_garbage *tem;


	while (garbage)
	{
		printf("%p\n", garbage);
		tem = garbage;
		garbage = (garbage)->next;
		if (tem->ptr)
			free(tem->ptr);
		free(tem);
	}
}
