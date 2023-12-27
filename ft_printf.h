/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:26:49 by aaambros          #+#    #+#             */
/*   Updated: 2023/12/15 16:44:40 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_hexa_lowercase(unsigned int n, int count);
int	ft_hexa_uppercase(unsigned int n, int count);
int	ft_putnbr(int n);
int	ft_printstr(char *s);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int n);
int	ft_putpointer(unsigned long long n);

#endif
