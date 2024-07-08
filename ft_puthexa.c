/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:13:19 by yadiaman          #+#    #+#             */
/*   Updated: 2024/07/08 19:45:12 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long long int nb, char *base)
{
	int		i;

	i = 0;
	if (nb < 16)
	{
		i += ft_putchar(base[nb]);
	}
	else
	{
		i += ft_puthexa(nb / 16, base);
		i += ft_putchar(base[nb % 16]);
	}
	return (i);
}

/* int main()
{
    int count;
    count = ft_puthexa(255, "0123456789abcdef");
    printf("\nTotal characters printed: %d\n", count);
    return 0;
}*/
