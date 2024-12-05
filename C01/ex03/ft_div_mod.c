/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:41:20 by bechrist          #+#    #+#             */
/*   Updated: 2024/11/25 16:27:21 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int	div;
	int	mod;
	int	a;
	int	b;

	a = 23;
	b = 3;

	ft_div_mod(a, b, &div, &mod);
	write(1, "Result:\n", 8);
	div = div + 48;
	mod = mod + 48;
	write(1, &div, 1);
	write(1, "\n", 1);
	write(1, &mod, 1);
}
 */