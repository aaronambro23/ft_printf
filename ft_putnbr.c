/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:28:32 by aaambros          #+#    #+#             */
/*   Updated: 2024/01/05 14:49:32 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_intlen(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa(long n)
{
	char	*num;
	int		len;

	len = ft_intlen(n);
	num = (char *)malloc(sizeof(char) * (len + 1));
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (n == 0)
		num[0] = '0';
	if (n < 0)
	{
		num[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		num[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}

int	ft_putnbr(int n)
{
	char	*num;
	int		len;

	len = 0;
	num = ft_itoa(n);
	len = ft_printstr(num);
	free(num);
	return (len);
}

// #include "ft_printf.h"

// int	ft_calclen(int n)
// {
// 	int	i;

// 	i = 0;
// 	if (n == 0)
// 		i++;
// 	while (n != 0)
// 	{
// 		n = n / 10;
// 		i++;
// 	}
// 	return (i);
// }

// int	ft_putnbr_pf(int n)
// {
// 	int	count;

// 	count = ft_calclen(n);
// 	if (n == -2147483648)
// 		return (ft_putstr_pf("-2147483648"));
// 	else
// 	{
// 		if (n < 0)
// 		{
// 			ft_putchar_pf('-');
// 			n = -n;
// 			count++;
// 		}
// 		if (n > 9)
// 		{
// 			ft_putnbr_pf(n / 10);
// 		}
// 		ft_putchar_pf((n % 10) + '0');
// 	}
// 	return (count);
// }