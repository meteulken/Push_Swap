
#include "push_swap.h"

void	ft_sourt_four(t_list **stackA, t_list **stackB)
{
	int	flag;

	flag = 0;
	ft_push_small_a(stackA, stackB, flag); //Stack a'mı Stack b'mi ve flag'ımı ft_push_small_a'ya gönderiyo
	ft_sort_three(stackA); //Stack'imizi short three'ye gönderip 3'ü arasında bir sıralama yapıyoruz.
	pa(stackA, stackB); //Sonrasında stack'b içinde tuttuğumuz minimum değeri pa ile geri alıyoruz.
}
