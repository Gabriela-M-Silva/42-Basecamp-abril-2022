/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function3-1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 01:34:14 by gde-mora          #+#    #+#             */
/*   Updated: 2022/04/18 02:33:36 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_find_4(char *dest)
{
	int	found_line;
	int	found_column;
	int	amount;

	amount = 1;
	while (amount <= 2)
	{
		found_line = 0;
		if (!(dest[7] == '4' || dest[8] == '4'
				|| dest[9] == '4' || dest[10] == '4'))
			found_line = 1;
		else if (!(dest[13] == '4' || dest[14] == '4'
				|| dest[15] == '4' || dest[16] == '4'))
			found_line = 2;
		else if (!(dest[19] == '4' || dest[20] == '4'
				|| dest[21] == '4' || dest[22] == '4'))
			found_line = 3;
		else if (!(dest[25] == '4' || dest[26] == '4'
				|| dest[27] == '4' || dest[28] == '4'))
			found_line = 4;
		found_column = 0;
		if (!(dest[7] == '4' || dest[13] == '4'
				|| dest[19] == '4' || dest[25] == '4'))
			found_column = 1;
		else if (!(dest[8] == '4' || dest[14] == '4'
				|| dest[20] == '4' || dest[26] == '4'))
			found_column = 2;
		else if (!(dest[9] == '4' || dest[15] == '4'
				|| dest[21] == '4' || dest[27] == '4'))
			found_column = 3;
		else if (!(dest[10] == '4' || dest[16] == '4'
				|| dest[22] == '4' || dest[28] == '4'))
			found_column = 4;
		if (found_column != 0 && found_line != 0)
		{
			if (dest[(6 * found_line)] == '3')
			{
				if (!(dest[(6 * found_line) + 4] == '3'))
					dest[(6 * found_line) + 2] = '3';
				dest[(6 * found_line) + 3] = '4';
			}
			else
				dest[(6 * found_line) + found_column] = '4';
		}
		amount++;
	}
}
