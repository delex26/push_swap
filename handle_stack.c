/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:10:29 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/19 01:37:28 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "push_swap.h"

void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

void	handle_stack(t_docket *stack, int ac, char **av)
{
	int		i;
	int		s;
	char	**split;

	check_input(stack, ac, av);
	stack->size_a = -1;
	stack->size_b = -1;
	stack->size_tmp = -1;
	i = 1;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		s = -1;
		while (split[++s])
		{
			stack->a[++stack->size_a] = ft_atoi(split[s]);
			stack->tmp[++stack->size_tmp] = ft_atoi(split[s]);
		}
		i++;
		free_split(split);
	}
	if (stack->size_a == -1)
		error_detected(stack);
	check_duplicate(stack, stack->a);
	sort_tmp(stack, stack->tmp, stack->size_tmp);
}

