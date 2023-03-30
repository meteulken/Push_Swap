
#include "push_swap.h"

static int	get_max_bits(t_list **stack)
{
	t_list	*tmp;
	int		max;
	int		max_bits;

	tmp = *stack; //stack'imizi tmp'e eşitliyoruz.
	max = tmp->index; //tmp'in indexini max'a eşitliyoruz.
	max_bits = 0; //max_bits'i 0'a eşitliyoruz.
	while (tmp) //tmp'imin bulunduğu durumda
	{
		if (tmp->index > max) //Eğer tmp_in index'i max'tan büyükse
			max = tmp->index; //Tmp'in index'ini max'a eşitliyoruz
		tmp = tmp->next; //Ve diğer elemanın indexi ile karşılaştırmak için tmp'in next'ini tmp'e eşitliyoruz.
	}
	while ((max >> max_bits) != 0) //En büyük sayıyıy bulduğu durumda binary sisteminde 0'ları atlayarak 1'i bulduğu duruöda
		max_bits++; //1'leri sayıyor
	return (max_bits); //max'bits'i döndürüyoruz.
}

void	radix_sort(t_list **stack_a, t_list **stack_b) //Indexlerin sıralamasını yapıyor.5 elemandan sonrası hep radix'e girer.
{
	t_list	*tmp;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	tmp = *stack_a; //Stack_a mı tmp'e eşitliyorum.
	size = ft_lstsize(tmp); //tmp'in uzunluğunu size'ye eşitliyorum.
	max_bits = get_max_bits(stack_a); //stac_a'mı get_max_bits'e yollayıp en büyük bit değerini max_bits'e eşitliyor.
	while (i < max_bits) //Sayacım max'bitsin değerine yani 3'e gelene kadar.
	{
		j = 0;
		while (j++ < size)
		{
			tmp = *stack_a; //stack_a'mı tmp'e eşitliyorum.
			if (((tmp->index >> i) & 1) == 1) //Sayımın binary'sinin ilk değeri 1'e eşitse 
				ra(stack_a); //ra ile aşağı atıyorum.
			else
				pb(stack_a, stack_b); //öyle değilse yani binary'de ilk değerim 0'sa küçük olduğunu anlayıp pb ile b'stack'ime atıyorum.
		}
		while (ft_lstsize(*stack_b) != 0) //B stack'imin içi dolu olduğu durumda.
			pa(stack_a, stack_b); //diğer değerleri tek tek geri alıp 
		i++; //i'yi arttırıyorum.
	}
}
