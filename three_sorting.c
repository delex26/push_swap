/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:08:12 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/16 23:02:01 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void three_sorting(t_docket *stack)
{
    int a = stack->a[0];
    int b = stack->a[1];
    int c = stack->a[2];

    if (a > b && b < c)
    {
        if (a < c)
        {
            sa(stack);
        }
        else
        {
            ra(stack);
            sa(stack);
        }
    }
    else if (a < b && b > c)
    {
        if (a < c)
        {
            rra(stack);
            sa(stack);
        }
        else
        {
            rra(stack);
        }
    }
    else if (a > b && b > c)
    {
        sa(stack);
        rra(stack);
    }
    else if (a < b && b < c && a > c)
    {
        rra(stack);
    }
    else if (a > b && b < c && a > c)
    {
        ra(stack);
    }
}


