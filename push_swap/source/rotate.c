
#include "push_swap.h"

int	rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*end;

	if (ft_lstsize(*stack) < 2) //Argüman sayım 2'den küçükse
		return (-1); //-1 döndürüyoruz.
	tmp = *stack; //Stack'ımızı tmp'e eşitliyoruz,
	end = ft_lstlast(tmp); //stack'ımızın son elemanını end'e eşitliyoruz.
	*stack = tmp->next; //Tmp'İn next'ini stack'e eşitledik,
	tmp->next = NULL; //Tmp'in next'ini NULL'a eşitledik
	end->next = tmp; //tmp'i end'in next'ine koyduk,
	return (0); //0 döndürdük.
}

int	ra(t_list **stack_a)
{
	if (rotate(stack_a) == -1) //-1'e eşit ise,
		return (-1); //-1 döndürüyoruz.
	ft_putendl_fd("ra", 1); //ra yazdırıyor,
	return (0); //0 döndürüyoruz.
}

int	rb(t_list **stack_b)
{
	if (rotate(stack_b) == -1)
		return (-1);
	ft_putendl_fd("rb", 1);
	return (0);
}

int	rr(t_list **stack_a, t_list **stack_b)
{
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	rotate(stack_a);
	rotate(stack_b);
	ft_putendl_fd("rr", 1);
	return (0);
}