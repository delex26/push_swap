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

int	count_extra(char *str)
{
	int	count;

	count = 1;
	while (*str != '\0')
	{
		if (*str == ' ')
		{
			count++;
		}
		str++;
	}
	return (count);
}

int	args_num(int ac, char **str)
{
	int	count;
	int	i;

	count = 0;
	i = 1;
	while (i < ac)
	{
		count += count_extra(str[i]);
		i++;
	}
	return (count);
}

int	num_size(char *str)
{
	int	count;

	count = 0;
	if (*str == '+' || *str == '-')
	{
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		count++;
		str++;
	}
	return (count);
}

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
