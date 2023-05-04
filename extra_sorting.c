/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:14:31 by hben-mes          #+#    #+#             */
/*   Updated: 2023/05/04 11:14:35 by hben-mes         ###   ########.fr       */
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
