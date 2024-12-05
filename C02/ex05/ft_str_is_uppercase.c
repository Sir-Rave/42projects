/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 15:35:53 by bechrist          #+#    #+#             */
/*   Updated: 2024/11/30 17:10:48 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
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
	char	str[6] = "AAAAAA";

	printf("%d", ft_str_is_uppercase(str));
	return (0);
}
 */