/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-mes <hben-mes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 19:14:02 by hben-mes          #+#    #+#             */
/*   Updated: 2023/05/04 11:01:46 by hben-mes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num_size(char *str)
{
	size_t	i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (i < ft_strlen(str))
	{
		while (j == 0)
		{
			if (str[i] == '0' || str[i] == '+' || str[i] == '-')
				i++;
			else
				j = 1;
		}
		count++;
		i++;
	}
	return (count);
}

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
	int	i;
	int	count;

	i = 1;
	count = 0;
	while (i < ac)
	{
		count += count_extra(str[i]);
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
