
#include "push_swap.h"

int	swap(t_list **stack) //2 sayılı bir list'e içerisinde sıralama yapıyoruz.
{
	t_list	*tmp;
	t_list	*holder;
	int		data;
	int		i;

	if (ft_lstsize(*stack) < 2) //stack içindeki eleman sayısı 2'den daha az ise,
		return (-1); //-1 dönüyoruz.
	tmp = *stack; 
	holder = tmp->next; //tmp'in next'ini holder'a eşitliyoruz,
	data = tmp->content; //tmp'in content'ini data'ya eşitliyoruz,
	i = tmp->index; //tmp'in index'ini i'ye eşitliyoruz.
	tmp->content = holder->content; //holder'in content'ini tmp'in content'ine eşitliyoruz.
	tmp->index = holder->index; //holder'in index'ini tmp'in index'ine eşitliyoruz,
	holder->content = data; //data'yı holder'in content'ine eşitliyoruz.
	holder->index = i; //i'yi de holder'in index'ine eşitliyoruz.
	return (0); //0 döndürüyoruz.
}

int	sa(t_list **stack_a)
{
	if (swap(stack_a) == -1) //-1 geldiyse
		return (-1); //-1 dönüyoruz.
	ft_putendl_fd("sa", 1); //sa yazdırıyor, standart output 1,
	return (0); //0 döndürüyoruz.
}

int	sb(t_list **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_putendl_fd("sb", 1);
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{	
	if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
		return (-1);
	swap(stack_a);
	swap(stack_b);
	ft_putendl_fd("ss", 1);
	return (0);
}
