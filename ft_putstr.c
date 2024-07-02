/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yadiaman <yadiaman@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:37:20 by yadiaman          #+#    #+#             */
/*   Updated: 2024/07/02 19:37:20 by yadiaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putstr(char *str)
{
    int i;
    i = 0;

    if (!str)
        return(ft_putstr("(null)"));

    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return(i);
}
