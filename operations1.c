/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:53:14 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/19 18:03:01 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_docket *stack)
{
	int	tmp;

	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	ft_printf("sa\n");
}

void	sb(t_docket *stack)
{
	int	tmp;

	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	ft_printf("sb\n");
}
void	ss(t_docket *stack)
{
	sa(stack);
	sb(stack);
	ft_printf("ss\n");
}
