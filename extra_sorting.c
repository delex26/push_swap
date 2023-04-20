/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:09:54 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/16 23:19:04 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_sort(t_docket *stack, int size_a, int size_b)
{
	if (size_a < stack->a[0] && size_b > stack->b[0])
		rrr(stack);
	else if (stack->a[0] > stack->a[1] && stack->b[0] < stack->b[1])
		ss(stack);
	else if (size_a < stack->a[0])
		rra(stack);
	else if (size_b > stack->b[0] && stack->size_b >= 1)
		rrb(stack);
	else if (stack->a[0] > stack->a[1])
		sa(stack);
	else if (stack->b[0] < stack->b[1] && stack->size_b >= 1)
		sb(stack);
	else if (check_if_sorted(stack, stack->a))
		pa(stack);
	else
		pb(stack);
}

void	extra_sorting(t_docket *stack)
{
	int	size_a;
	int	size_b;

	while (!(check_if_sorted(stack, stack->a) && stack->size_b == -1))
	{
		size_b = 0;
		size_a = stack->a[stack->size_a];
		if (stack->size_b > 0)
			size_b = stack->b[stack->size_b];
		handle_sort(stack, size_a, size_b);
	}
}
