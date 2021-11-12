/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jforner <jforner@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 15:38:20 by jforner           #+#    #+#             */
/*   Updated: 2021/11/12 11:21:40 by jforner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_error(char *base)
{
	char	find;
	int		j;
	int		i;

	i = 0;
	while (base[i])
	{
		find = base[i];
		j = i + 1;
		while (base[j])
		{
			if (find == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_str_display(char *display, int len, size_t *count)
{
	int	i;

	i = len - 1;
	while (i >= 0)
	{
		ft_putchar((int)display[i], count);
		i--;
	}
}
