/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonction.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennace <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:49:53 by ebennace          #+#    #+#             */
/*   Updated: 2021/11/10 16:01:55 by ebennace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}
//Imprimer 1 caracteres plus le nombre de
//caracteres imprimer

int	ft_putstr(char *str)
{
	int	i;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = ft_strlen(str);
	write (1, str, i);
	return (i);
}
//Imprimer une chaine de caracteres plus le nombre de
//caracteres imprimer

int	ft_putnbr(int n)
{
	unsigned int	nb;
	char			c;
	int				i;

	i = 0;
	c = '-';
	nb = n;
	if (n < 0)
	{
		i += write(1, &c, 1);
		nb = n * -1;
	}
	if (nb > 9)
	{
		i += ft_putnbr(nb / 10);
	}
	c = 48 + nb % 10;
	i += write (1, &c, 1);
	return (i);
}

int	ft_putunbr(unsigned int nb)
{
	int		i;
	char	c;

	i = 0;
	if (nb > 9)
	{
		i += ft_putunbr(nb / 10);
	}
	c = 48 + nb % 10;
	i += write (1, &c, 1);
	return (i);
}
