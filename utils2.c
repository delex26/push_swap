/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:14:13 by hben-mes          #+#    #+#             */
/*   Updated: 2023/05/01 19:14:13 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *i, int *j)
{
	int	tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
}

int	sort_check(t_docket *stack, int *arr)
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

void	sort_lim(t_docket *stack, int *arr, int l)
{
	int	i;

	i = 0;
	while (!sort_check(stack, arr))
	{
		i = 0;
		while (i < l)
		{
			if (arr[i] > arr[i + 1])
				swap(&arr[i], &arr[i + 1]);
			i++;
		}
	}
}
