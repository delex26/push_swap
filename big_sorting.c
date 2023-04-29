/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sorting.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 13:41:11 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/29 15:39:02 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	control_pb(t_docket *stack, int min, int max, int len)
{
	while (stack->size_a != -1)
	{
		if (stack->a[0] >= stack->lim[min] && stack->a[0] <= stack->lim[max])
		{
			pb(stack);
			if (max <= len - 1)
			{
				min++;
				max++;
			}
		}
		else if (stack->a[0] < stack->lim[min])
		{
			pb(stack);
			rb(stack, "rb\n");
			if (max <= len - 1)
			{
				min++;
				max++;
			}
		}
		else if ((stack->a[0] > stack->lim[max]))
			ra(stack, "ra\n");
	}
}

void	make_pb(t_docket *stack, int range)
{
	int	len;
	int	min;
	int	max;

	len = stack->size_a;
	min = 0;
	max = range;
	control_pb(stack, min, max, len);
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
