/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:13:13 by hben-mes          #+#    #+#             */
/*   Updated: 2023/05/03 19:20:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	control_sorting(t_docket *stack, int size_a, int size_b)
{
	if (stack->a[0] > stack->a[1])
		sa(stack, "sa\n");
	else if (stack->b[0] < stack->b[1] && stack->size_b >= 1)
		sb(stack, "sb\n");
	else if (stack->a[0] > stack->a[1] && stack->b[0] < stack->b[1])
		ss(stack);
	else if (size_a < stack->a[0])
		rra(stack, "rra\n");
	else if (size_b > stack->b[0] && stack->size_b >= 1)
		rrb(stack, "rrb\n");
	else if (size_a < stack->a[0] && size_b > stack->b[0])
		rrr(stack);
	else if (sort_check(stack, stack->a))
		pa(stack);
	else
		pb(stack);
}

void	extra_sorting(t_docket *stack)
{
	int	size_a;
	int	size_b;

	while (!(sort_check(stack, stack->a) && stack->size_b == -1))
	{
		size_a = stack->a[stack->size_a];
		size_b = 0;
		if (stack->size_b > 0)
			size_b = stack->b[stack->size_b];
		control_sorting(stack, size_a, size_b);
	}
}
