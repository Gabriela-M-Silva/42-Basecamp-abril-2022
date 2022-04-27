/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:10:31 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/18 14:26:57 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "definitions.h"

int	validate(int argc, char *argv[])
{
	int		sum_digits;
	int		sum_sizes;

	if (argc < 2)
	{
		ft_error();
		return (1);
	}
	sum_sizes = sum_size(argv[1]);
	sum_digits = sum_digit(argv[1]);
	if (!(sum_digits == 16 && sum_sizes == 32))
	{
		ft_error();
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		m;
	char	matrix[37];

	if (validate(argc, argv) == 1)
		return (1);
	i = 0;
	m = 0;
	while (argv[1][i])
	{	
		if (argv[1][i] >= '0' && argv[1][i] <= '4')
		{
			matrix[m] = argv[1][i];
			m++;
		}
		i++;
	}
	ft_calculator_matrix(m, matrix);
}
