/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-mora <gde-mora@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 18:54:01 by gde-mora          #+#    #+#             */
/*   Updated: 2022/04/22 22:16:46 by gde-mora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	id;
	unsigned int	is;

	is = 0;
	id = ft_strlen(dest);
	while (src[is] && is < nb)
	{
		dest[id + is] = src[is];
		is++;
	}
	dest[id + is] = '\0';
	return (dest);
}
#include <stdio.h>
#include <string.h>

int main(void)
{
    char string1[10] = "abcdef";
    char string2[10] = "je";
    printf("%s\n", ft_strncat(string1,string2, 4));
    char string3[10] = "abcdef";
    char string4[10] = "je";
    printf("%s\n", strncat(string3,string4, 4));
    return (0);
}

