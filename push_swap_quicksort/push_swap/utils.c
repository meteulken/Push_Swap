/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <mulken@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:18:41 by mulken            #+#    #+#             */
/*   Updated: 2023/11/22 12:18:44 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_ps_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_ps_atoi_(char *str, int *sign)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

int	ft_ps_atoi(char *str, t_stack *stack, char **av, int control)
{
	unsigned int		i;
	int					sign;
	unsigned long int	num;

	num = 0;
	sign = 1;
	i = ft_ps_atoi_(str, &sign);
	if (!(ft_is_num(str)))
		ft_free_av(av, stack, control);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			ft_free_av(av, stack, control);
		num = (str[i] - '0') + (num * 10);
		i++;
	}
	if ((num > 2147483648 && sign == -1) || (num > 2147483647 && sign == 1))
		ft_free_av(av, stack, control);
	return (num * sign);
}
