/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 16:06:14 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/18 01:45:06 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "definitions.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

int	ft_atoi(char str)
{
	int	result;

	result = 0;
	result = (result * 10) + (str - '0');
	return ((int)(result * 1));
}

int	sum_digit(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '4')
			j++;
		i++;
	}
	return (j);
}

int	sum_size(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i + 1);
}
