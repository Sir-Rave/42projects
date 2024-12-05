/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:50:35 by bechrist          #+#    #+#             */
/*   Updated: 2024/11/28 20:47:10 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
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
	char	str[6] = "aaaaaa";

	printf("%d", ft_str_is_lowercase(str));
	return (0);
}
 */