/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:08:12 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/29 15:55:21 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sorting(t_docket *stack)
{
	a = stack->a[0];
	b = stack->a[1];
	c = stack->a[2];
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2])
	{
		if (a < c)
			sa(stack, "sa\n");
		else
		{
			ra(stack, "ra\n");
			sa(stack, "sa\n");
		}
	}
	else if (a < b && b > c)
	{
		if (a < c)
		{
			rra(stack, "rra\n");
			sa(stack, "sa\n");
		}
		else
			rra(stack, "rra\n");
	}
	else if (a > b && b > c)
	{
		sa(stack, "sa\n");
		rra(stack, "rra\n");
	}
	else if (a < b && b < c && a > c)
		rra(stack, "rra\n");
	else if (a > b && b < c && a > c)
		ra(stack, "ra\n");
}
