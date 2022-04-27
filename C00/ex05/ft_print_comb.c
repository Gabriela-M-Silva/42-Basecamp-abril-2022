/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:47:22 by gde-mora          #+#    #+#             */
/*   Updated: 2022/04/12 08:44:15 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_number(char n1, char n2, char n3);
void	ft_print_comb(void);

void	ft_putchar_number(char n1, char n2, char n3)
{
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	n2 = '1';
	n3 = '2';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				ft_putchar_number(n1, n2, n3);
				n3++;
				if (n1 < '7')
					write(1, ", ", 2);
			}
			n2++;
		}
		n1++;
	}	
}
