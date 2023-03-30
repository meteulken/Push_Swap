
#include "push_swap.h"

int	push(t_list **dest, t_list **source) //minimum sayıyı dest'in içinde tutuyoruz.
{
	t_list	*tmp;
	t_list	*tmp_dest;
	t_list	*tmp_source;

	if (ft_lstsize(*source) == 0) //Listemin uzunluğu 0'a eşitse
		return (-1); //-1 döndürüyoruz.
	tmp_dest = *dest; 
	tmp_source = *source;
	tmp = tmp_source;
	tmp_source = tmp_source->next;
	*source = tmp_source;
	if (!tmp_dest)
	{
		tmp_dest = tmp; //Tmp'i tmp_dest'e eşitliyorum
		tmp_dest->next = NULL; //Tmp_dest'in next'ini NULL'a eşitliyorum ve minimum değeri kopartıyorum.
		*dest = tmp_dest; //Bu değeri de *dest'in içinde tutuyorum.
	}
	else
	{
		tmp->next = tmp_dest; //*dest'te gelen dest stack b geliyor,
		*dest = tmp; //b boş değilse karşı tarafta bir ikili oluşturuyoruz.
	}
	return (0); //0 döndürüyoruz.
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1) //-1 geldiyse
		return (-1); //-1 döndürüyoruz
	ft_putendl_fd("pa", 1); //pa yazdırıyoruz.
	return (0); //0 döndürüyoruz.
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1) //-1 geldiyse,
		return (-1); //-1 döndürüyoruz,
	ft_putendl_fd("pb", 1); //pb yazdırıyoruz,
	return (0); //0 döndürüyoruz.
}
