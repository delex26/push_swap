/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 10:46:12 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/25 11:30:17 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void  error_detected(t_docket *stack)
{
  ft_printf("Error Detected\n");
  free(stack->a);
  free(stack->b);
  free(stack->tmp);
  exit(1);
}

void check_if_empty(t_docket *stack, int ac, char **a) 
{
    int i;

    i = 1;
    while (i < ac) 
    {
        int j;

        j = 0;
        int count;

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

void check_digit(t_docket *stack,int ac, char **a)
{
    int i;

	i = 1;

    while (i < ac)
    {
        int j;

		j = 0;
        while (a[i][j])
        {
            if (!ft_isdigit(a[i][j]))
                error_detected(stack);
            j++;
        }
        i++;
    }
}

void	check_duplicate(t_docket *stack, int *a)
{
	{
	int	i;
	int	j;

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
	if (check_max(a) > 10)
		error_detected(stack);
	if (ft_atoi(a) > 2147483647 || ft_atoi(a) < -2147483648)
		error_detected(stack);
}

void  check_input(t_docket *stack, int ac, char **a)
{
  check_if_empty(stack, ac, a);
  check_digit(stack, ac, a);
}








