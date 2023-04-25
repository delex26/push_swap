/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:47:49 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/25 11:42:53 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_docket *stack, char *s)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->a[stack->size_a];
	if (stack->size_a > 0)
	{
		ft_printf("%s", s);
		while (i < stack->size_a)
		{
			stack->a[stack->size_a - i] = stack->a[stack->size_a - 1 - i];
			i++;
		}
		stack->a[0] = tmp;
	}
}

void	rrb(t_docket *stack, char *s)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->b[stack->size_b];
	if (stack->size_b > 0)
	{
		ft_printf("%s", s);
		while (i < stack->size_b)
		{
			stack->b[stack->size_b - i] = stack->b[stack->size_b - 1 - i];
			i++;
		}
		stack->b[0] = tmp;
	}
}

void	rrr(t_docket *stack)
{
	ft_printf("rrr\n");
	rra(stack, "");
	rrb(stack, "");
}
