/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:57:00 by jforner           #+#    #+#             */
/*   Updated: 2021/11/12 11:32:19 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_switch(const char *str, size_t *i, va_list parameter, size_t *count);

void	ft_putascii(unsigned long nb, size_t *count);
void	ft_putchar(int c, size_t *count);
void	ft_putnbr_base(unsigned int nbr, char *base, size_t *count);
void	ft_putnbr(int nb, size_t *count);
void	ft_putunbr(unsigned int nb, size_t *count);
void	ft_putstr(char *str, size_t *count);
void	ft_putlong_base(unsigned long nbr, char *base, size_t *count);

int		ft_strlen(char *str);
int		ft_error(char *base);
void	ft_str_display(char *display, int len, size_t *count);
#endif