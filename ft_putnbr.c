/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 23:04:20 by yadiaman          #+#    #+#             */
/*   Updated: 2024/07/02 23:04:20 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i += ft_putstr("-2147483648");
	}
	else if (n < 0)
	{
		i += ft_putchar('-');
		i += ft_putnbr(-n);
	}
	else if (n > 9)
	{
		i += ft_putnbr(n / 10);
		i += ft_putchar (n % 10 + '0');
	}
	else
		i += ft_putchar(n + '0');
	return (i);
}
