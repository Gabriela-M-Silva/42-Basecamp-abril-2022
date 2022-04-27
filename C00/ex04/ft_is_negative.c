/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:36:04 by gde-mora          #+#    #+#             */
/*   Updated: 2022/04/09 06:44:57 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	result;

	if (n >= 0)
	{
		result = 'P';
		write(1, &result, 1);
	}
	else
	{
		result = 'N';
		write(1, &result, 1);
	}
}
