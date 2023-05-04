/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:13:21 by hben-mes          #+#    #+#             */
/*   Updated: 2023/05/04 11:06:47 by hben-mes         ###   ########.fr       */
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
	char	**s;

	if (stack->size_a == -1)
		error_detected(stack);
	check_cases(stack, ac, av);
	stack->size_a = -1;
	stack->size_b = -1;
	stack->size_lim = -1;
	i = 0;
	while (++i < ac)
	{
		s = ft_split(av[i], ' ');
		j = -1;
		while (s[++j])
		{
			stack->a[++stack->size_a] = ft_atoi(s[j]);
			stack->lim[++stack->size_lim] = ft_atoi(s[j]);
			check_limits(stack, s[j]);
		}
		free_split(s);
	}
	check_duplicate(stack, stack->a);
	sort_lim(stack, stack->lim, stack->size_lim);
}
