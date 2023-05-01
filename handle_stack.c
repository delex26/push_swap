/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:10:29 by hben-mes          #+#    #+#             */
/*   Updated: 2023/05/01 03:30:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_cases(t_docket *stack, int ac, char **a)
{
	check_if_empty(stack, ac, a);
	check_digit(stack, ac, a);
}

void	handle_stack(t_docket *stack, int ac, char **av)
{
	int		i;
	int		j;
	char	**split;

	check_cases(stack, ac, av);
	stack->size_a = -1;
	stack->size_b = -1;
	stack->size_lim = -1;
	i = 1;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		j = 0;
		while (split[j])
		{
			stack->a[++stack->size_a] = ft_atoi(split[j]);
			stack->lim[++stack->size_lim] = ft_atoi(split[j]);
			check_limits(stack, split[j]);
		}
		free_split(split);
	}
	if (stack->size_a == -1)
		error_detected(stack);
	check_duplicate(stack, stack->a);
	sort_lim(stack, stack->lim, stack->size_lim);
}
