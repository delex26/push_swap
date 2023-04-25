/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:06:28 by hben-mes          #+#    #+#             */
/*   Updated: 2023/04/25 11:06:28 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_inputs(char *str)
{
	int	check;
	int	input;
	int	i;

	check = 0;
	input = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			check = 0;
		else if (check == 0)
		{
			check = 1;
			input++;
		}
		i++;
	}
	return (input);
}

int	num_of_args(int ac, char **str)
{
	int	count;
	int	j;

	count = 0;
	j = 1;
	while (j < ac)
	{
		count = count + count_inputs(str[j]);
		j++;
	}
	return (count);
}

int	check_max(char *str)
{
	size_t	i;
	int		check;
	int		count;

	i = 0;
	check = 0;
	count = 0;
	while (i < ft_strlen(str))
	{
		while (i < ft_strlen(str) && check == 0)
		{
			if (str[i] == '0' || str[i] == '+' || str[i] == '-')
				i++;
			else
				check = 1;
		}
		count++;
		i++;
	}
	return (count);
}

// int count_inputs(char *str) 
// {
//     int input = 0;
//     int check = 1; 
//     char *c = str;

//     while (*c != '\0') 
// 	{
//         if (*c == ' ') 
// 		{
//             check = 1;
//         } 
// 		else if (check)
// 		{
//             input++;
//             check = 0;
//         }
//         c++;
//     }

//     return (input);
// }

// int num_of_args(int ac, char **str) 
// {
//     int count = 0;
//     char **s = str + 1;

//     while (ac-- > 1) 
// 	{
//         count += count_inputs(*s++);
//     }

//     return count;
// }

// int check_max(char *str) 
// {
//     int digit_count = 0;
//     char *c = str;

//     while (*c != '\0') 
// 	{
//         if (*c >= '0' && *c <= '9') 
// 		{
//             digit_count++;
//         }
//         c++;
//     }

//     return digit_count;
// }



