
#include "push_swap.h"

int	ft_lstsize(t_list *lst) //Listemizin uzunluğunu almamızı sağlıyor.
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
