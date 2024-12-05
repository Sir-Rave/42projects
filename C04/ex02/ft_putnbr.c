/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:29:15 by bechrist          #+#    #+#             */
/*   Updated: 2024/12/04 23:04:30 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	number(int number)
{
	int	i;
	int	j;

	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	i = 1;
	j = number;
	while (number >= 10)
	{
		i = i * 10;
		number = number / 10;
	}
	while (i >= 10)
	{
		ft_putchar((j / i) + '0');
		j = j % i;
		i = i / 10;
	}
	ft_putchar(j + '0');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		number(nb);
	}
}

/* int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	return (0);
}
 */