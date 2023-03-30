
#include "push_swap.h"

static t_list	*get_next_min(t_list **stack) //Burda hepsine bir etiket koyuyor hepsine sıralı olup olmadığına bakıyor.
{
	t_list	*tmp; 
	t_list	*min;
	int		flag;

	tmp = *stack;
	flag = 0;
	min = NULL; //Min'in içini NULL'a eşitliyorum.
	if (!tmp) //Tmp yoksa
		return (NULL); //Null döndürüyoruz.
	while (tmp) //Tmp'in bulunduğu durumda
	{
		if ((tmp->index == -1) && (!flag || tmp->content < min->content)) //Tmp'in indeksi -1'e eşitse ve 
		{
			flag = 1;
			min = tmp; //ilk olarak tmp'in content'ini min'e eşitler.
		}
		tmp = tmp->next; //Bir sonraki elemanı işaret eder.
	}
	return (min);
}

void	index_stack(t_list **stack) //Burada Sıralama yaptığı her index'ten sonra 0-1-2 değerlerini veriyor. -1'lerin yerine yazıyor.
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = get_next_min(stack); //Stack'imi get_next_min'e yolluyor.
	while (tmp) //tmp'in bulunduğu durumlarda,
	{
		tmp->index = i++; //i'yi arttırıp her seferinde index'ime eşitliyor.
		tmp = get_next_min(stack); //stack'ımı tmp'e eşitleyip get_next_min'e yolluyoruz.
	}
}
