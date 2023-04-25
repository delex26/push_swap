/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:41:11 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/25 11:21:12 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_pb(t_docket *stack, int min, int max, int len)
{
	while (stack->size_a != -1)
	{
		if (stack->a[0] >= stack->tmp[min] && stack->a[0] <= stack->tmp[max])
		{
			pb(stack);
			if (max <= len - 1)
			{
				min++;
				max++;
			}
		}
		else if (stack->a[0] < stack->tmp[min])
		{
			pb(stack);
			rb(stack, "rb\n");
			if (max <= len - 1)
			{
				min++;
				max++;
			}
		}
		else if ((stack->a[0] > stack->tmp[max]))
			ra(stack, "ra\n");
	}
}

void	push_to_b(t_docket *stack, int range)
{
	int	min;
	int	max;
	int	len;

	len = stack->size_a;
	min = 0;
	max = range;
	handle_pb(stack, min, max, len);
}

void	push_to_a(t_docket *stack)
{
	int	big;

	while (stack->size_b != -1)
	{
		big = stack->b[find_big(stack)];
		if (find_big(stack) <= stack->size_b / 2)
			while (stack->b[0] != big)
				rb(stack, "rb\n");
		else if (find_big(stack) > stack->size_b / 2)
			while (stack->b[0] != big)
				rrb(stack, "rrb\n");
		pa(stack);
	}
}

void	big_sorting(t_docket *stack, int range)
{
	push_to_b(stack, range);
	push_to_a(stack);
}


