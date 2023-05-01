/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:14:02 by hben-mes          #+#    #+#             */
/*   Updated: 2023/05/02 00:35:39 by hben-mes         ###   ########.fr       */
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
