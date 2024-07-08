/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:57:43 by yadiaman          #+#    #+#             */
/*   Updated: 2024/07/08 21:53:00 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_check_format(const char *format, va_list argu)
{
	int	count;

	count = 0;
	if (*format == '%')
		count += ft_putchar('%');
	else if (*format == 'c')
		count += ft_putchar(va_arg(argu, int));
	else if (*format == 's')
		count += ft_putstr(va_arg(argu, char *));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(argu, int));
	else if (*format == 'u')
		count += ft_putunsigned(va_arg(argu, unsigned int));
	else if (*format == 'x')
		count += ft_puthexa(va_arg(argu, unsigned int), "0123456789abcdef");
	else if (*format == 'X')
		count += ft_puthexa(va_arg(argu, unsigned int), "0123456789ABCDEF");
	else if (*format == 'p')
		count += ft_putptr(va_arg(argu, void *));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			count += ft_check_format(str, args);
			str++;
		}
		else
		{
			count += ft_putchar(*str);
			str++;
		}
	}
	va_end(args);
	return (count);
}

/* int main()
{
        int i;
        int     j;

        i = 0;
        j = 0;
        //prueba
        // printf("Hola");
        ft_printf("prueba de ft_print:\n");
        j = ft_printf("myprintf: cadena de caracteres: %s, myprintf: puntero: %p\n", "hola punky", (void *) 0x12345678);
        i = printf("printf: cadena de caracteres: %s, printf: puntero: %p\n", "hola punky", (void *) 0x12345678);
        printf("printf : %i\nmyprintf : %i\n\n", i, j);

        j = ft_printf("myprintf: puntero: %p\n", (void *) 0x12345678);
        i = printf("printf: puntero: %p\n", (void *) 0x12345678);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);
        
        j = ft_printf("myprintf: puntero: %p\n", (void *) 0x0);
        i = printf("printf: puntero: %p\n", (void *) 0x0);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("myprintf: numero hexadecimal: %x\n", -254639852);
        i = printf("printf: numero hexadecimal: %x\n", -254639852);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("myprintf: numero en formato decimal: %i\n", 2546);
        i = printf("printf: numero en formato decimal: %i\n", 2546);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("myprintf: numero entero: %d\n", 42);
        i = printf("printf: numero entero: %d\n", 42);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

        j = ft_printf("myprintf: unsigned %u\n", 5);
        i = printf("printf: unsigned %u\n", 5);
        printf("printf : %i\nmyprintf: %i\n\n", i, j);
		
 		j = ft_printf("myprintf: char %c\n", 'b');
        i = printf("printf: char %c\n", 'b');
        printf("printf : %i\nmyprintf: %i\n\n", i, j);

}
*/
