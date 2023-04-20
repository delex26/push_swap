/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:47:27 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/19 18:03:11 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_docket *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->a[0];
	while (i < stack->size_a)
	{
		stack->a[i] = stack->a[i + 1];
		stack->a[i] = tmp;
		i++;
	}
	ft_printf("ra\n");
}

void	rb(t_docket *stack)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->b[0];
	while (i < stack->size_b)
	{
		stack->b[i] = stack->b[i + 1];
		stack->b[i] = tmp;
		i++;
	}
	ft_printf("rb\n");
}

void	rr(t_docket *stack)
{
	ra(stack);
	rb(stack);
	ft_printf("rr\n");
}