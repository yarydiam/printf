/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:36:54 by yadiaman          #+#    #+#             */
/*   Updated: 2024/07/04 12:36:54 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned int num)
{
	int	i;

	i = 0;
	if (num > 9)
	{
		i += ft_putunsigned(num / 10);
		i += ft_putchar(num % 10 + '0');
	}
	else
		i += ft_putchar(num + '0');
	return (i);
}
