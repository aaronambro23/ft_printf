/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_uppercase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:27:02 by aaambros          #+#    #+#             */
/*   Updated: 2023/12/13 23:27:17 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_uppercase(unsigned int n, int count)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	if (n >= 16)
	{
		count = ft_hexa_uppercase(n / 16, count);
	}
	write(1, &hexa[n % 16], 1);
	count++;
	return (count);
}
