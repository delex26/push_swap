/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:46:12 by hben-mes          #+#    #+#             */
/*   Updated: 2023/05/02 00:35:26 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_detected(t_docket *stack)
{
	write(2, "Error\n", 6);
	free(stack->a);
	free(stack->b);
	free(stack->lim);
	exit(1);
}

void	check_if_empty(t_docket *stack, int ac, char **a)
{
	int	i;
	int	j;
	int	count;

	i = 1;
	while (i < ac)
	{
		j = 0;
		count = 0;
		while (a[i][j] != '\0')
		{
			if (a[i][j] != ' ')
				count++;
			j++;
		}
		if (a[i][0] == '\0' || count == 0)
			error_detected(stack);
		i++;
	}
}

void	check_digit(t_docket *stack, int ac, char **a)
{
	int	bef;
	int	aft;
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (a[i][j] != '\0')
		{
			bef = a[i][j - 1];
			aft = a[i][j + 1];
			if ((!ft_isdigit(a[i][j]) && a[i][j] != ' '
				&& a[i][j] != '-' && a[i][j] != '+')
				|| (a[i][j] == '-' &&
					(!ft_isdigit(aft) || ft_isdigit(bef)))
				|| (a[i][j] == '+' &&
					(!ft_isdigit(aft) || ft_isdigit(bef))))
				error_detected(stack);
			j++;
		}
		i++;
	}
}

void	check_duplicate(t_docket *stack, int *a)
{
	int	i;
	int	j;

	{
		i = 0;
		j = 0;
		while (j <= stack->size_a)
		{
			i = j;
			while (++i <= stack->size_a)
				if (a[j] == a[i])
					error_detected(stack);
			j++;
		}
	}
}

void	check_limits(t_docket *stack, char *a)
{
	if (ft_atoi(a) > INT_MAX || ft_atoi(a) < INT_MIN)
		error_detected(stack);
	if (num_size(a) > 10)
		error_detected(stack);
}
