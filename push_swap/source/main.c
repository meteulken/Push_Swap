
#include "push_swap.h"

static void	init(t_list **stack, int ac, char **av)
{
	t_list	*new;
	char	**tab;
	int		i;

	i = 0;
	if (ac == 2)
		tab = ft_split(av[1], ' '); //tab'ımın içini freelediğim için burada tekrardan split'e gönderip ayırıyoruz.
	else
	{
		i = 1;
		tab = av; 
	}
	while (tab[i])
	{
		new = ft_lstnew(ft_atoi(tab[i])); //Burda tab'ımın i. indeksini lst'new ile yeni liste elemanı oluşuturup new'e atıyoruz
		ft_lstadd_back(stack, new); //Burada da lst_add back ile arkasına tek tek ekliyoruz.
		i++;
	}
	index_stack(stack); //Stack'imi sıralamak için index_stack'e yolluyor.
	if (ac == 2)
		ft_free_str(tab); //tab'ın içini freeliyoruz.
}

int	is_sorted(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp && tmp->next)
	{
		if (tmp->content > tmp->next->content) //sıralanmamışsa 0 döndürüyor.
			return (0); //o dönderiyor.
		tmp = tmp->next; //Bitene kadar 
	}
	return (1);
}

static void	sort(t_list **stack_a, t_list **stack_b)
{
	if (ft_lstsize(*stack_a) <= 5) //5 eleman ve daha az eleman varsa,
	{
		ft_small_sort(stack_a, stack_b); //small sort'a gönderiyor.
	}
	else
		radix_sort(stack_a, stack_b);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;

	if (ac < 2) //Argüman sayım 2'den küçükse
		return (-1); // -1 döndür.
	check_args(ac, av); //Argümanlarımı check args'a yolluyorum.
	stack_a = (t_list **)malloc(sizeof(t_list)); //2 boyutlu bir pointırın gösterdiği yerin ilk indisini stack_a olarak belirliyoruz
	stack_b = (t_list **)malloc(sizeof(t_list)); //2 boyutlu bir pointırın gösterdiği yerin ilk indisini stack_b olarak belirliyoruz
	*stack_a = NULL; //Yapının içini NULL'a eşitliyoruz
	*stack_b = NULL; //Yapının içini NULL'a eşitliyoruz
	init(stack_a, ac, av); //Argümanlarımı ve stack_a'mı init'e yolluyoruz.
	if (is_sorted(stack_a)) //0 döndüğü an sıralamaya gönderiyor.
	{
		free_stack(stack_a); //stackleri freeliyor
		free_stack(stack_b);
		return (0);
	}
	sort(stack_a, stack_b); //sıralamak için sort'a gönderiyor.
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
