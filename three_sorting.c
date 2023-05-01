/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:08:12 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/30 20:03:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sorting(t_docket *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2]
		&& stack->a[0] < stack->a[2])
		sa(stack, "sa\n");
	else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[0] < stack->a[2])
	{
		rra(stack, "rra\n");
		sa(stack, "sa\n");
	}
	else if (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[0] > stack->a[2])
	{
		sa(stack, "sa\n");
		rra(stack, "rra\n");
	}
	else if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2]
		&& stack->a[0] > stack->a[2])
		rra(stack, "rra\n");
	else if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2]
		&& stack->a[0] > stack->a[2])
		ra(stack, "ra\n");
}
