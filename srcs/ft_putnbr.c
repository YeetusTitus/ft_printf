/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:26:24 by jforner           #+#    #+#             */
/*   Updated: 2021/11/10 12:15:55 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putnbr(int nb, size_t *count)
{
	if (nb < 0 && !(nb == -2147483648))
	{
		nb *= -1;
		ft_putchar((int) '-', count);
	}
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10, count);
		ft_putchar((int) '8', count);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, count);
		ft_putnbr(nb % 10, count);
	}
	else if (!(nb == -2147483648))
	{
		nb += '0';
		ft_putchar((int) nb, count);
	}
}
