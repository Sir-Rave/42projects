/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 21:45:52 by bechrist          #+#    #+#             */
/*   Updated: 2024/11/25 22:01:38 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char	*str)
{
	while (*str != 0)
	{
		write(1, str, 1);
		str++;
	}
}

/* int	main(void)
{
	ft_putstr("Hello World!");
	return (0);
}
 */