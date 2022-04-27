/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 17:44:13 by gde-mora          #+#    #+#             */
/*   Updated: 2022/04/11 18:28:03 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	first_line(int x);
void	second_line(int x);
void	third_line(int x);
void	rush(int x, int y);

void	first_line(int x)
{
	int	index;

	index = 1;
	while (index <= x)
	{
		if (index == 1)
			ft_putchar('/');
		else if (index < x)
			ft_putchar('*');
		else
			ft_putchar('\\');
		index++;
	}
	if (x > 0)
		ft_putchar('\n');
}

void	second_line(int x)
{
	int	index;

	index = 1;
	while (index <= x)
	{
		if (index == 1)
			ft_putchar('*');
		else if (index < x)
			ft_putchar(' ');
		else
			ft_putchar('*');
		index++;
	}
	if (x > 0)
		ft_putchar('\n');
}

void	third_line(int x)
{
	int	index;

	index = 1;
	while (index <= x)
	{
		if (index == 1)
			ft_putchar('\\');
		else if (index < x)
			ft_putchar('*');
		else
			ft_putchar('/');
		index++;
	}
	if (x > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	index;

	index = 1;
	while (index <= y)
	{
		if (index == 1)
			first_line(x);
		else if (index != y)
			second_line(x);
		else
			third_line(x);
		index++;
	}
}
