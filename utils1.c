/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:48:47 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/29 15:48:47 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verify_temporary(t_docket *stack, int *arr)
{
	int	i;

	i = 0;
	while (i < stack->size_a)
	{
		if (arr[i] > arr[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	swap(int *i, int *j)
{
	int	tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

void	sort_temporary(t_docket *stack, int *arr, int len)
{
	int	i;

	i = 0;
	while (!verify_temporary(stack, arr))
	{
		i = 0;
		while (i < len)
		{
			if (arr[i] > arr[i + 1])
				swap(&arr[i], &arr[i + 1]);
			i++;
		}
	}
}

int	find_biggest(t_docket *stack)
{
	int	biggest;
	int	i;

	biggest = 0;
	i = 1;
	while (i <= stack->size_b)
	{
		if (stack->b[biggest] < stack->b[i])
		{
			biggest = i;
		}
		i++;
	}
	return (biggest);
}
