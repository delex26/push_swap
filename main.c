/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 19:39:46 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/25 14:29:06 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_docket	stack;

	if (ac < 2)
		exit(0);
	stack.a = calloc(num_of_args(ac, av), sizeof(int));
	stack.b = calloc(num_of_args(ac, av), sizeof(int));
	stack.tmp = calloc(num_of_args(ac, av), sizeof(int));
	handle_stack(&stack, ac, av);
	if (stack.size_a > 100)
		big_sorting(&stack, 35);
	else if (stack.size_a >= 15 && stack.size_a <= 100)
		big_sorting(&stack, 15);
	else if (stack.size_a == 2)
		three_sorting(&stack);
	else
		extra_sorting(&stack);
	free(stack.a);
	free(stack.b);
	free(stack.tmp); 
}