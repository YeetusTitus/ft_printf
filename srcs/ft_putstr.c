/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 20:47:56 by jforner           #+#    #+#             */
/*   Updated: 2021/11/10 13:32:41 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putstr(char *str, size_t *count)
{
	if (!str)
		ft_putstr("(null)", count);
	else
	{
		while (*str)
		{
			ft_putchar((int) *str, count);
			str++;
		}
	}
}
