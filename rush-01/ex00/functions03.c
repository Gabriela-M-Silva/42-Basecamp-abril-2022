/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function03.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:40:48 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/18 01:34:44 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "definitions.h"

void	ft_fill_4(int i, char dest[i])
{
	while (i < 4)
	{
		if (dest[1 + i] == '1' && dest [31 + i] == '4')
		{
			dest[7 + i] = '4';
			dest[13 + i] = '3';
			dest[19 + i] = '2';
			dest[25 + i] = '1';
		}
		if (dest[1 + i] == '4' && dest [31 + i] == '1')
		{
			dest[7 + i] = '1';
			dest[13 + i] = '2';
			dest[19 + i] = '3';
			dest[25 + i] = '4';
		}
		i++;
	}	
}

void	ft_fill_4and1(char *dest)
{
	int	i;

	i = 0;
	ft_fill_4(i, dest);
	i = 0;
	while (i < 4)
	{
		if (dest[6 + i] == '1' && dest [11 + i] == '4')
		{
			dest[7 + i] = '4';
			dest[8 + i] = '3';
			dest[9 + i] = '2';
			dest[10 + i] = '1';
		}
		if (dest[6 + i] == '4' && dest [11 + i] == '1')
		{
			dest[7 + i] = '1';
			dest[8 + i] = '2';
			dest[9 + i] = '3';
			dest[10 + i] = '4';
		}
		i++;
	}	
}

void	ft_find_4_in_line(char *dest)
{
	int	amount;

	amount = 2;
	while (amount <= 5)
	{
		if (dest[(6 * amount + 3)] == '4' && dest [(6 * amount + 2)] == '0')
			dest[(6 * amount + 2)] = '1';
		amount++;
	}
}

void	ft_find_1(char *dest)
{
	int	found_line;
	int	found_column;
	int	amount;

	amount = 1;
	while (amount <= 2)
	{
		found_line = 0;
		if (!(dest[7] == '1' || dest[8] == '1'
				|| dest[9] == '1' || dest[10] == '1'))
			found_line = 1;
		else if (!(dest[13] == '1' || dest[14] == '1'
				|| dest[15] == '1' || dest[16] == '1'))
			found_line = 2;
		else if (!(dest[19] == '1' || dest[20] == '1'
				|| dest[21] == '1' || dest[22] == '1'))
			found_line = 3;
		else if (!(dest[25] == '1' || dest[26] == '1'
				|| dest[27] == '1' || dest[28] == '1'))
			found_line = 4;
		found_column = 0;
		if (!(dest[7] == '1' || dest[13] == '1'
				|| dest[19] == '1' || dest[25] == '1'))
			found_column = 1;
		else if (!(dest[8] == '1' || dest[14] == '1'
				|| dest[20] == '1' || dest[26] == '1'))
			found_column = 2;
		else if (!(dest[9] == '1' || dest[15] == '1'
				|| dest[21] == '1' || dest[27] == '1'))
			found_column = 3;
		else if (!(dest[10] == '1' || dest[16] == '1'
				|| dest[22] == '1' || dest[28] == '1'))
			found_column = 4;
		if (found_column != 0 && found_line != 0)
		{
			if (dest[(6 * found_line) + found_column] == '0')
			{
				if (dest[(6 * found_line) + 1] == '4'
					&& dest[(6 * found_line) + 4] == '0')
					dest[(6 * found_line) + 4] = '1';
			}
			else
				dest[(6 * found_line) + found_column] = '1';
		}
		amount++;
	}
}
