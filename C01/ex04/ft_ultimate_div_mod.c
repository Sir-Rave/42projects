/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:30:50 by bechrist          #+#    #+#             */
/*   Updated: 2024/11/25 21:43:23 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 23;
	b = 3;

	ft_ultimate_div_mod(&a, &b);
	a = a + '0';
	b = b + '0';
	write(1, "Result:\n", 8);
	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, &b, 1);
}
 */