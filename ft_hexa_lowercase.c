/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_lowercase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaambros <aaambros@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 23:27:22 by aaambros          #+#    #+#             */
/*   Updated: 2023/12/13 23:27:25 by aaambros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_lowercase(unsigned int n, int count)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		count = ft_hexa_lowercase(n / 16, count);
	}
	write(1, &hexa[n % 16], 1);
	count++;
	return (count);
}
