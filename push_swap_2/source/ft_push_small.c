/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:52:30 by mulken            #+#    #+#             */
/*   Updated: 2023/05/03 12:52:31 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_small_a(t_list **stackA, t_list **stackB, int flag)
{
	int	i;
	t_list	*head;

	i = 0;
	head = *stackA;
	while (head)
	{
		if (head->index == flag)
		{
			if (i <= 2 - flag)
			{
				while (i > 0)
				{
					ra(stackA);
					i--;
				}
			}
			else
			{
				while ((5 - flag) > i)
				{
					rra(stackA);
					i++;
				}
			}
			pb(stackA, stackB);
		}
		i++;
		head = head->next;
	}
}
