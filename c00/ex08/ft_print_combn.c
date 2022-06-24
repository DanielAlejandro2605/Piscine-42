/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnieto-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:51:47 by dnieto-c          #+#    #+#             */
/*   Updated: 2022/02/05 15:29:07 by dnieto-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	long long	nbr;
	
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -1 * nb;	
	}
	nbr = (long long) nb;

	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10); 
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}

int	ft_verify_number(int *number, int range)
{
	int	i;

	i = 0;
	while (i < range)
	{
		if (number[i] >= number[i + 1])
		{
			return (0);
		}
		i++;
	}
	return (1);
}
void	ft_print_number(int *number, int range)
{
	int	i;

	i = 0;
	while (i <= range)
	{
		ft_putnbr(number[i]);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	number[n];
	int	i;
	int	k;

	i = 0;
	while (i <= 2)
	{
		number[i] = i;
		i++;
	}
	
	while(number[0] <= (10 - n))
	{
		if (ft_verify_number(number, n))
		{
			ft_print_number(number, n);
		}
		number[n - 1]++;
		k = 1;
		while (number[n - k] == 10 && n > 1)
		{
			number[n - k - 1]++;
			number[n - k] = 0;
			k++;
		}
	}
}
int	main(void)
{
	ft_print_combn(2);
	return (0);
}
