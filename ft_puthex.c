/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:12:26 by yadiaman          #+#    #+#             */
/*   Updated: 2024/07/05 11:12:26 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char c)
{
	unsigned long long	i;

	i = 0;
	if (n >= 16)
		i += ft_puthex (n / 16, c);
	if (c == 'x')
		ft_putchar("0123456789abcdef"[n % 16]);
	else if (c == 'X')
		ft_putchar("0123456789ABCDEF"[n % 16]);
	i++;
	return (i);
}

/* int main()
{
    unsigned long long nb = 42;
    int num_chars = ft_puthex(nb, 'x');  // Llamada a ft_puthex con el número y el formato de minúsculas
    printf("\nCharacters printed: %d\n", num_chars);  // Para verificar el número de caracteres impresos
    return 0;
}
*/