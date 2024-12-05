/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:47:56 by bechrist          #+#    #+#             */
/*   Updated: 2024/11/24 15:27:32 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/* int	main(void)
{
	int	i;
	int	*pointer;

	pointer = &i;
	ft_ft(pointer);
	write(1, &i, 1);
	return (0);
}
 */