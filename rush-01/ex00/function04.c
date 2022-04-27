/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function04.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:55:31 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/18 02:39:32 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "definitions.h"

void	ft_find_3(char *dest)
{
	if (dest[6] == '3' && dest[1] == '3')
		dest[7] = '2';
}

void	ft_find_3and2(char *dest)
{
	if (dest[12] == '3' && dest[6] == '2' && dest[13] == '0')
		dest[13] = '2';
	if (dest[18] == '3' && dest[12] == '2' && dest[19] == '0')
		dest[19] = '2';
}

void	ft_fill_line(char *dest)
{
	int	l;
	int	unit;
	int	qunit;
	int	sum;

	l = 1;
	while (l <= 4)
	{
		unit = 0;
		sum = 0;
		qunit = 0;
		if (dest[6 * l + 1] == '0')
		{
			unit = 6 * l + 1;
			qunit++;
		}
		sum += ft_atoi(dest[6 * l + 1]);
		if (dest[6 * l + 2] == '0')
		{
			unit = 6 * l + 2;
			qunit++;
		}
		sum += ft_atoi(dest[6 * l + 2]);
		if (dest[6 * l + 3] == '0')
		{
			unit = 6 * l + 3;
			qunit++;
		}
		sum += ft_atoi(dest[6 * l + 3]);
		if (dest[6 * l + 4] == '0')
		{
			unit = 6 * l + 4;
			qunit++;
		}
		sum += ft_atoi(dest[6 * l + 4]);
		if (qunit == 1)
		{
			dest[unit] = 10 - sum + '0';
		}
		l++;
	}
}

void	ft_fill_column(char *dest)
{
	int	c;
	int	unit;
	int	qunit;
	int	sum;

	c = 1;
	while (c <= 4)
	{
		unit = 0;
		sum = 0;
		qunit = 0;
		if (dest[6 + c] == '0')
		{
			unit = 6 + c;
			qunit++;
		}
		sum += ft_atoi(dest[6 + c]);
		if (dest[12 + c] == '0')
		{
			unit = 12 + c;
			qunit++;
		}
		sum += ft_atoi(dest[12 + c]);
		if (dest[18 + c] == '0')
		{
			unit = 18 + c;
			qunit++;
		}
		sum += ft_atoi(dest[18 + c]);
		if (dest[24 + c] == '0')
		{
			unit = 24 + c;
			qunit++;
		}
		sum += ft_atoi(dest[24 + c]);
		if (qunit == 1)
		{
			dest[unit] = 10 - sum + '0';
		}
		c++;
	}
}
