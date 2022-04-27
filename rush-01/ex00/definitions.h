/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   definitions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:57:01 by lealberg          #+#    #+#             */
/*   Updated: 2022/04/18 01:49:57 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINITIONS_H
# define DEFINITIONS_H

# include <unistd.h>

int		ft_atoi(char str);
int		sum_size(char *str);
int		sum_digit(char *str);
void	ft_error(void);
void	ft_putchar(char c);
void	ft_show_matrix(int m, char *str);
void	ft_calculator_matrix(int m, char *str);
void	ft_fill_line(char *dest);
void	ft_show_matrix_ref(int m, char *str);
void	ft_find_3(char *dest);
void	ft_find_3and2(char *dest);
void	ft_fill_line(char *dest);
void	ft_fill_column(char *dest);
void	ft_discover(char *dest);
void	ft_fill_4and1(char *dest);
void	ft_achar(char *dest);
void	ft_find_4_in_line(char *dest);
void	ft_find_1(char *dest);
void	ft_find_4(char *dest);
void	ft_find_4and1(char *dest);
void	ft_show_fill(char *origin, char *dest);

#endif // DEFINITIONS