/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnieto-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 10:10:06 by dnieto-c          #+#    #+#             */
/*   Updated: 2022/02/10 12:43:41 by dnieto-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long	number;

	number = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		number = -1 * number;
	}
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	else
	{
		ft_putchar(number + '0');
	}
}
