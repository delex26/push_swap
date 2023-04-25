/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations4.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:27:07 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/25 11:45:27 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_docket *stack)
{
	int	i;

	if (stack->size_b >= 0)
	{
		ft_printf("pa\n");
		stack->size_a++;
		i = 0;
		while (i < stack->size_a)
		{
			stack->a[stack->size_a - i] = stack->a[stack->size_a - 1 - i];
			i++;
		}
		stack->a[0] = stack->b[0];
		i = 0;
		while (i < stack->size_b)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->size_b--;
	}
}

void	pb(t_docket *stack)
{
	int	i;

	if (stack->size_a >= 0)
	{
		ft_printf("pb\n");
		stack->size_b++;
		i = 0;
		while (i < stack->size_b)
		{
			stack->b[stack->size_b - i] = stack->b[stack->size_b - 1 - i];
			i++;
		}
		stack->b[0] = stack->a[0];
		i = 0;
		while (i < stack->size_a)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->size_a--;
	}
}
