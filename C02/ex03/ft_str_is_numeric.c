/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:39:43 by bechrist          #+#    #+#             */
/*   Updated: 2024/11/28 20:52:04 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			j++;
		}
		i++;
	}
	if (i == j)
	{
		return (1);
	}
	else
		return (0);
}

/* int	main(void)
{
	char	str[6] = "123456";

	printf("%d", ft_str_is_numeric(str));
	return (0);
}
 */