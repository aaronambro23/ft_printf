/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:15:45 by aaambros          #+#    #+#             */
/*   Updated: 2023/12/15 16:18:12 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptrlen(unsigned long long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

static void	ft_putptr(unsigned long long n)
{
	if (n >= 16)
	{
		ft_putptr(n / 16);
		ft_putptr(n % 16);
	}
	else
	{
		if (n < 10)
			ft_putchar(n + '0');
		else
			ft_putchar(n + 'a' - 10);
	}
}

int	ft_putpointer(unsigned long long n)
{
	int	len;

	if (n == (unsigned long long)0)
		return (ft_putstr("0x0"));
	else
	{
		len = 0;
		len += ft_printstr("0x");
		ft_putptr(n);
		len += ft_ptrlen(n);
		return (len);
	}
}
