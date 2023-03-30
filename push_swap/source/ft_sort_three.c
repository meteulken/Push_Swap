
#include "push_swap.h"

void	ft_other_three(t_list **stackA, int *nums)
{
	if (nums[0] > nums[1] && nums[1] > nums[2])
	{
		ra(stackA); //rotade a yaparız,
		sa(stackA); //sa yaparız.
	}
	else if (nums[0] < nums[1] && nums[1] > nums[2]
		&& nums[0] < nums[2])
	{
		sa(stackA); //sa yaparız,
		ra(stackA); //rotade a yaparız.
	}
}

void	ft_sort_three(t_list**stackA) //sıralama yapıyor.
{
	t_list	*head;
	int		nums[3];
	int		i;

	i = 0;
	head = *stackA; //stack_a'yı head'e eşitliyor.
	while (head != 0) //Head 'a eşit değilse
	{
		nums[i] = head->content; //Daha kolay sıralama yapabilmek için bunları bir array'de topluyoruz.
		head = head->next;
		i++;
	}
	if (nums[0] > nums[1] && nums[1] < nums[2]
		&& nums[0] < nums[2]) 
		sa(stackA); //Direkt sa yapıyor.
	else if (nums[0] < nums[1] && nums[1] > nums[2]
		&& nums[0] > nums[2])
		rra(stackA); //direkt reverse rotade a yapıyor.
	else if (nums[0] > nums[1] && nums[1] < nums[2]
		&& nums[0] > nums[2]) 
		ra(stackA); //rotade a yapıyor.
	else
		ft_other_three(stackA, nums); //Kalan algoritmalar için diğer sıralama kombinasyonlarına gönderiyoruz.
}
