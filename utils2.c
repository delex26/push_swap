#include "push_swap.h"

int	check_if_sorted(t_docket *stack, int *arr)
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

void	sort_tmp(t_docket *stack, int *arr, int len)
{
	int	i;

	i = 0;
	while (!check_if_sorted(stack, arr))
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

int	find_big(t_docket *stack)
{
	int	big_index;
	int	i;

	big_index = 0;
	i = 1;
	while (i <= stack->size_b)
	{
		if (stack->b[big_index] < stack->b[i])
		{
			big_index = i;
		}
		i++;
	}
	return (big_index);
}