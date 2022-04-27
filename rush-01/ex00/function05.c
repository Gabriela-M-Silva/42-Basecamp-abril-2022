/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function05.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:59:43 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/18 17:28:45 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "definitions.h"

void	ft_discover(char *dest)
{
	int	lin;
	int	col;

	lin = 1;
	while (lin <= 4)
	{
		col = 1;
		while (col <= 4)
		{
			if (dest[(6 * lin) + col] == '0')
			{
				if (dest[(6 * lin) + 1] == '2'
					|| dest[(6 * lin) + 2] == '2'
					|| dest[(6 * lin) + 3] == '2'
					|| dest[(6 * lin) + 4] == '2')
					if (dest[(6 * lin) + 1] == '3'
						|| dest[(6 * lin) + 2] == '3'
						|| dest[(6 * lin) + 3] == '3'
						|| dest[(6 * lin) + 4] == '3')
						dest[(6 * lin) + col] = '2';
				else
					dest[(6 * lin) + col - 2] = '3';
				else
					dest[(6 * lin) + col] = '2';
				break ;
			}
			col++;
		}
		lin++;
	}	
}

void	ft_discover3f(char *dest)
{
	int	lin;
	int	col;

	lin = 1;
	while (lin <= 4)
	{
		col = 1;
		while (col <= 4)
		{
			if (dest[(6 * lin) + col] == '0')
			{
				if (dest[(6 * lin) + 1] == '3'
					|| dest[(6 * lin) + 2] == '3'
					|| dest[(6 * lin) + 3] == '3'
					|| dest[(6 * lin) + 4] == '3')
				{
					if (dest[(6 * lin) + 1] == '2'
						|| dest[(6 * lin) + 2] == '2'
						|| dest[(6 * lin) + 3] == '2'
						|| dest[(6 * lin) + 4] == '2')
						dest[(6 * lin) + col] = '3';
					else
						dest[(6 * lin) + col - 2] = '2';
				}
				else
					dest[(6 * lin) + col] = '3';
				break ;
			}
			col++;
		}
		lin++;
	}	
}

void	ft_calculator_matrix(int m, char *matrix_ref)
{
	int		i;
	char	str[37];
// = "000000000000000000000000000000000000";    deu mais de 25 linhas      n pode comentario aqui
	i = 0;
	while (i < 37)
	{
		str[i] = '0';
		i++;
	}
	m = 37;
	ft_show_fill(matrix_ref, str);
	ft_find_4and1(str);
	ft_fill_4and1(str);
	ft_find_4(str);
	ft_find_4_in_line(str);
	ft_find_1(str);
	ft_find_3(str);
	ft_find_3and2(str);
	ft_fill_line(str);
	ft_fill_column(str);
	ft_fill_line(str);
	ft_fill_column(str);
	ft_find_1(str);
	ft_discover(str);
	ft_discover3f(str);
	ft_show_matrix_ref(37, str);
}
