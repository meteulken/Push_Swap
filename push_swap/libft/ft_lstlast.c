
#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst) //list'enin son elemanını almamızı sağlıyor.
{
	if (!lst)
		return (0);
	while (lst -> next != NULL)
		lst = lst->next;
	return (lst);
}
