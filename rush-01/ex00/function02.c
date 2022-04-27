/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function02.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:52:47 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/18 14:29:53 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "definitions.h"

void	ft_show_matrix_ref(int m, char *str)
{
	int	i;

	i = 0;
	while (i < m)
	{
		if ((i >= 7 && i <= 10)
			|| (i >= 13 && i <= 16)
			|| (i >= 19 && i <= 22)
			|| (i >= 25 && i <= 28))
		{
			ft_putchar(str[i]);
			if (i == 4 || i == 10 || i == 16 || i == 22 || i == 28)
				ft_putchar('\n');
			else
				ft_putchar(' ');
		}
		i++;
	}
}

void	ft_show_matrix(int m, char *str)
{
	int	i;

	i = 0;
	while (i < m)
	{
		ft_putchar(str[i]);
		if (i == 5 || i == 11 || i == 17 || i == 23 || i == 29 || i == 35)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
}

void	ft_show_fill(char *origin, char *dest)
{
	dest[0] = ' ';
	dest[5] = ' ';
	dest[30] = ' ';
	dest[35] = ' ';
	dest[1] = origin[0];
	dest[2] = origin[1];
	dest[3] = origin[2];
	dest[4] = origin[3];
	dest[31] = origin[4];
	dest[32] = origin[5];
	dest[33] = origin[6];
	dest[34] = origin[7];
	dest[6] = origin[8];
	dest[12] = origin[9];
	dest[18] = origin[10];
	dest[24] = origin[11];
	dest[11] = origin[12];
	dest[17] = origin[13];
	dest[23] = origin[14];
	dest[29] = origin[15];
}

void	check1(int i, char dest[i])
{
	if (i >= 1 && i <= 4)
		dest[i + 6] = '1';
	if (i == 6 || i == 12 || i == 18 || i == 24 || i == 30)
		dest[i + 1] = '1';
	if (i == 11 || i == 17 || i == 23 || i == 29 || i == 35)
		dest[i - 1] = '1';
	if (i >= 31 && i <= 34)
		dest[i - 6] = '1';
}

void	ft_find_4and1(char *dest)
{
	int	i;

	i = 0;
	while (dest[i])
	{
		if (ft_atoi(dest[i]) == 4)
		{
			check1(i, dest);
		}
		if (ft_atoi(dest[i]) == 1)
		{
			if (i >= 1 && i <= 4)
				dest[i + 6] = '4';
			if (i == 6 || i == 12 || i == 18 || i == 24 || i == 30)
				dest[i + 1] = '4';
			if (i == 11 || i == 17 || i == 23 || i == 29 || i == 35)
				dest[i - 1] = '4';
			if (i >= 31 && i <= 34)
				dest[i - 6] = '4';
		}
		i++;
	}
}
