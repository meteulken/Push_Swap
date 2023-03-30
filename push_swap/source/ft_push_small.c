
#include "push_swap.h"

void	ft_push_small_a(t_list **stackA, t_list **stackB, int flag) //4 sayıyı sıralamak için 1'ini karşıya atıyor en küçüğünü.
{
	t_list	*head;
	int	i;
	i = 0;
	head = *stackA; //stack'imi head'e eşitliyor.
	while (head) //Head'imin bulunduğu durumlarda.
	{
		if (head->index == flag) //Eğer head'imin index'i 0'a eşit ise,
		{
			if (i <= 2 - flag)
				while (i > 0)
				{
					ra(stackA); //rotade a ya gönderiyor.
					i--; //Sayacımızı azaltıyoruz.
				}
			else
				while ((5 - flag) > i)
				{
					rra(stackA);
					i++;
				}
			pb(stackA, stackB); //pb'ye gönderiyoruz stack'lerimizi
		}
		i++;
		head = head->next;
	}
}
