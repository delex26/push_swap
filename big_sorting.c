/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:12:54 by hben-mes          #+#    #+#             */
/*   Updated: 2023/05/01 21:57:04 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_pb(t_docket *stack, int range)
{
	int	first;
	int	last;
	int	l;

	first = 0;
	last = range;
	l = stack->size_a;
	control_pb(stack, first, last, l);
}

void	make_pa(t_docket *stack)
{
	int	biggest;

	while (stack->size_b != -1)
	{
		biggest = stack->b[find_biggest(stack)];
		if (find_biggest(stack) > stack->size_b / 2)
			while (stack->b[0] != biggest)
				rrb(stack, "rrb\n");
		else if (find_biggest(stack) <= stack->size_b / 2)
			while (stack->b[0] != biggest)
				rb(stack, "rb\n");
		pa(stack);
	}
}

void	big_sorting(t_docket *stack, int range)
{
	make_pb(stack, range);
	make_pa(stack);
}
