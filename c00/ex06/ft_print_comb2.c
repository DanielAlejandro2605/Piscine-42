/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnieto-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 09:45:59 by dnieto-c          #+#    #+#             */
/*   Updated: 2022/02/05 18:00:52 by dnieto-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_nums(int a, int b)
{
	int		a1;
	int		a2;
	int		b1;
	int		b2;

	a1 = (a / 10 + '0');
	a2 = (a % 10 + '0');
	ft_putchar(a1);
	ft_putchar(a2);
	ft_putchar(' ');
	b1 = (b / 10 + '0');
	b2 = (b % 10 + '0');
	ft_putchar(b1);
	ft_putchar(b2);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_nums(a, b);
			if (a < 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
