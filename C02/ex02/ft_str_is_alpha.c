/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:08:59 by bechrist          #+#    #+#             */
/*   Updated: 2024/11/28 22:01:44 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			j++;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	str[6] = "AaBbCc";

	printf("%d", ft_str_is_alpha(str));
	return (0);
}
 */