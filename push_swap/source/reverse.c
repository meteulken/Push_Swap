
#include "push_swap.h"

int	reverserotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	if (ft_lstsize(*stack) < 2) //Argüman sayım 2'den küçükse,
		return (-1); //-1 döndürüyoruz.
	tmp = *stack; //stack'imizi tmp'e eşitliyoruz
	end = ft_lstlast(tmp); //listemizin son elemanını end'e eşitliyoruz.
	while (tmp) //tmp'in bulunduğu durumlarda.
	{
		if (tmp->next->next == NULL) //Eğer tmp'in next'inin next'i NULL'ise giriyor
		{
			tmp->next = NULL; //temp'in next'inin NULL'a eşitliyor.
			break ;
		}
		tmp = tmp->next; //temp'in next'inin tmp'e yani tmp'in content'ine eşitliyor.
	}
	end->next = *stack; //en son stack'ımızı end'in next'ine atıyoruz.
	*stack = end; //en son stack'imiizn belirlenmesi için end'i stack'e eşitleyip
	return (0); //0 döndürüyoruz.
}

int	rra(t_list **stack_a)
{
	if (reverserotate(stack_a) == -1) //-1'e eşitse,
		return (-1); //-1 dönüyor.
	ft_putendl_fd("rra", 1); //rra yazdırıyor.
	return (0); //0 döndürüyoruz.
}

int	rrb(t_list **stack_b)
{
	if (reverserotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rrb", 1);
	return (0);
}

int	rrr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	reverserotate(stack_a);
	reverserotate(stack_b);
	ft_putendl_fd("rrr", 1);
	return (0);
}
