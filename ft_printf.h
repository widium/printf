/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebennace <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:11:36 by ebennace          #+#    #+#             */
/*   Updated: 2021/11/10 17:16:46 by ebennace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_strlen(char *str);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int nb);
int	ft_puthexa_max(unsigned int nb);
int	ft_puthexa_min(unsigned int nb);
int	ft_puthexa_long(unsigned long nb);
int	ft_check_format(const char *str, va_list liste, int i);
int	ft_printf(const char *str, ...);
int	ft_print(unsigned long nb, char *dest, char *alphabt, int i);
#endif
