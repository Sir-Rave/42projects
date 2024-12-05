/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 20:31:15 by bechrist          #+#    #+#             */
/*   Updated: 2024/11/24 15:37:36 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	amazon_delivery;
	int	*first_value;
	int	*second_value;

	first_value = a;
	second_value = b;
	amazon_delivery = *first_value;
	*first_value = *second_value;
	*second_value = amazon_delivery;
}

/* int	main(void)
{
	int	first_value;
	int	second_value;

	first_value = 42;
	second_value = 36;
	write(1, &first_value, 1);
	write(1, &second_value, 1);
	write(1, "\n", 1);
	ft_swap(&first_value, &second_value);
	write(1, &first_value, 1);
	write(1, &second_value, 1);
}
 */