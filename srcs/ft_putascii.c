/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putascii.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:01:12 by jforner           #+#    #+#             */
/*   Updated: 2021/11/10 14:37:52 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putascii(unsigned long nb, size_t *count)
{
	ft_putstr("0x", count);
	ft_putlong_base(nb, "0123456789abcdef", count);
}
