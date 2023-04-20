/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:27:07 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/19 18:02:50 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_docket *stack)
{
	if (stack->size_b < 0)
		return ;
	int	i;

	i = 0;
	stack->size_a++;
	while (i < stack->size_a)
	{
		stack->a[stack->size_a - i] = stack->a[stack->size_a - 1 - i];
		i++;
	}
	stack->a[0] = stack->b[0];
	while (i < stack->size_b)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->size_b--;
	ft_printf("pa\n");
}

void	pb(t_docket *stack)
{
	if (stack->size_a < 0)
		return ;
	int	i;

	i = 0;
	stack->size_b++;
	while (i < stack->size_b)
	{
		stack->b[stack->size_b - i] = stack->b[stack->size_b - 1 - i];
		i++;
	}
	stack->b[0] = stack->a[0];
	while (i < stack->size_a)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->size_a--;
	ft_printf("pb\n");
}