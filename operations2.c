/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:47:27 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/25 11:42:28 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_docket *stack, char *s)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->a[0];
	if (stack->size_a > 0)
	{
		ft_printf("%s", s);
		while (i < stack->size_a)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[i] = tmp;
	}
}

void	rb(t_docket *stack, char *s)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack->b[0];
	if (stack->size_b > 0)
	{
		ft_printf("%s", s);
		while (i < stack->size_b)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[i] = tmp;
	}
}

void	rr(t_docket *stack)
{
	ft_printf("rr\n");
	ra(stack, "");
	rb(stack, "");
}
