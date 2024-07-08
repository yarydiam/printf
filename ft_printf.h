/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:01:40 by yadiaman          #+#    #+#             */
/*   Updated: 2024/07/08 18:04:51 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_puthexa(unsigned long long int nb, char *base);
int	ft_putptr(void *n);
int	ft_putunsigned(unsigned int n);

#endif
