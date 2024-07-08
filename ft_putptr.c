/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 12:46:54 by yadiaman          #+#    #+#             */
/*   Updated: 2024/07/08 18:05:08 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *n)
{
	int						i;
	unsigned long long int	ptr;

	i = 0;
	if (!n)
		return (ft_putstr("(nil)"));
	ptr = (unsigned long long int)n;
	ft_putstr("0x");
	i = ft_puthexa(ptr, "0123456789abcdef");
	return (i + 2);
}
