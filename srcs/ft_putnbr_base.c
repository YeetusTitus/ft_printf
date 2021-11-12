/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:49:07 by jforner           #+#    #+#             */
/*   Updated: 2021/11/12 11:53:03 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putnbr_base(unsigned int nbr, char *base, size_t *count)
{
	int				len;
	int				i;
	char			str[16];
	unsigned int	u_nbr;

	i = 0;
	len = ft_strlen(base);
	if (len == 0 || len == 1 || !(ft_error(base)))
		return ;
	u_nbr = nbr;
	while (u_nbr > 0 || (nbr == 0 && i == 0))
	{
		str[i] = base[u_nbr % len];
		i++;
		u_nbr = u_nbr / len;
	}
	str[i] = 0;
	ft_str_display(str, ft_strlen(str), count);
}
