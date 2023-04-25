/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 13:45:50 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/25 11:29:59 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct s_docket
{
	int		*a;
	int		*b;
	int		*tmp;
	int		size_a;
	int		size_b;
	int		size_tmp;
}		t_docket;

//operations//
void	sa(t_docket *stack, char *s);
void	sb(t_docket *stack, char *s);
void	ss(t_docket *stack);
void	ra(t_docket *stack, char *s);
void	rb(t_docket *stack, char *s);
void	rr(t_docket *stack);
void	rra(t_docket *stack, char *s);
void	rrb(t_docket *stack, char *s);
void	rrr(t_docket *stack);
void	pa(t_docket *stack);
void	pb(t_docket *stack);

//functions//

void	handle_pb(t_docket *stack, int min, int max, int len);
void	push_to_b(t_docket *stack, int range);
void	push_to_a(t_docket *stack);
void	big_sorting(t_docket *stack, int range);
void  	error_detected(t_docket *stack);
void	check_if_empty(t_docket *stack, int ac, char **a);
void 	check_digit(t_docket *stack,int ac, char **a);
void	check_duplicate(t_docket *stack, int *a);
void	check_limits(t_docket *stack, char *a);
void  	check_input(t_docket *stack, int ac, char **a);
void	handle_sort(t_docket *stack, int size_a, int size_b);
void	extra_sorting(t_docket *stack);
void	free_split(char **split);
void 	handle_stack(t_docket *stack, int ac, char **av);
void 	three_sorting(t_docket *stack);
int 	count_inputs(char *str) ;
int 	num_of_args(int ac, char **str) ;
int 	check_max(char *str) ;
int		check_if_sorted(t_docket *stack, int *arr);
void	swap(int *i, int *j);
void	sort_tmp(t_docket *stack, int *arr, int len);
int		find_big(t_docket *stack);

#endif 


