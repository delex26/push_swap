/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:47:49 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/19 18:03:32 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_docket *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->a[stack->size_a];
	while (i < stack->size_a)
	{
		stack->a[stack->size_a - i] = stack->a[stack->size_a - 1 - i];
		stack->a[0] = tmp;
		i++;
	}
	ft_printf("rra\n");
}

void	rrb(t_docket *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->b[stack->size_b];
	while (i < stack->size_b)
	{
		stack->b[stack->size_b - i] = stack->b[stack->size_b - 1 - i];
		stack->b[0] = tmp;
		i++;
	}
	ft_printf("rrb\n");
}

void	rrr(t_docket *stack)
{
	rra(stack);
	rrb(stack);
	ft_printf("rrr\n");
}