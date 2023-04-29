/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:53:14 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/29 15:45:54 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_docket *stack, char *s)
{
	int	tmp;

	if (stack->size_a > 0)
	{
		ft_printf("%s", s);
		tmp = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = tmp;
	}
}

void	sb(t_docket *stack, char *s)
{
	int	tmp;

	if (stack->size_b > 0)
	{
		ft_printf("%s", s);
		tmp = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = tmp;
	}
}

void	ss(t_docket *stack)
{
	ft_printf("ss\n");
	sa(stack, "");
	sb(stack, "");
}
