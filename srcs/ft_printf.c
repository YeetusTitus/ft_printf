/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:51:41 by jforner           #+#    #+#             */
/*   Updated: 2021/11/10 14:29:11 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_switch(const char *str, size_t *i, va_list param, size_t *count)
{
	if (str[*i + 1] == 'd' || str[*i + 1] == 'i')
		ft_putnbr((int)va_arg(param, int), count);
	else if (str[*i + 1] == 's')
		ft_putstr((char *)va_arg(param, char *), count);
	else if (str[*i + 1] == 'X')
		ft_putnbr_base(va_arg(param, unsigned int), "0123456789ABCDEF", count);
	else if (str[*i + 1] == 'x')
		ft_putnbr_base(va_arg(param, unsigned int), "0123456789abcdef", count);
	else if (str[*i + 1] == 'c')
		ft_putchar((int)va_arg(param, int), count);
	else if (str[*i + 1] == '%')
		ft_putchar('%', count);
	else if (str[*i + 1] == 'p')
		ft_putascii((unsigned long)va_arg(param, unsigned long), count);
	else if (str[*i + 1] == 'u')
		ft_putunbr((unsigned int)va_arg(param, unsigned), count);
	i[0]++;
}

int	ft_printf(const char *str, ...)
{
	va_list	parameter;
	size_t	i;
	size_t	count;

	va_start (parameter, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
			ft_switch(str, &i, parameter, &count);
		else
			ft_putchar(str[i], &count);
		i++;
	}
	va_end (parameter);
	return (count);
}
