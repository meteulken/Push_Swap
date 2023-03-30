
#include "push_swap.h"

void	ft_free_str(char **str) //Str'mizin içini freeliyoruz.
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
		free(str[i--]);
	free(str);
}


void	free_stack(t_list **stack) //stack'ımızın içini freeliyoruz,
{
	t_list	*tmp;
	t_list	*delete;

	tmp = *stack;
	while (tmp)
	{
		delete = tmp;
		tmp = tmp->next;
		free(delete);
	}
	free(stack);
}
