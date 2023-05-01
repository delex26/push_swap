/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:41:11 by hben-mes          #+#    #+#             */
/*   Updated: 2023/05/01 04:02:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_pb(t_docket *stack, int range)
{
	int	l;
	int	first;
	int	last;

	l = stack->size_a;
	first = 0;
	last = range;
	control_pb(stack, first, last, l);
}

void	make_pa(t_docket *stack)
{
	int	biggest;

	while (stack->size_b != -1)
	{
		biggest = stack->b[find_biggest(stack)];
		if (find_biggest(stack) <= stack->size_b / 2)
			while (stack->b[0] != biggest)
				rb(stack, "rb\n");
		else if (find_biggest(stack) > stack->size_b / 2)
			while (stack->b[0] != biggest)
				rrb(stack, "rrb\n");
		pa(stack);
	}
}

void	big_sorting(t_docket *stack, int range)
{
	make_pb(stack, range);
	make_pa(stack);
}
