/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:46:08 by bechrist          #+#    #+#             */
/*   Updated: 2024/12/02 21:46:39 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	printf("%d\n", ft_strcmp("bruh", "bruh!"));
	printf("%d\n", ft_strcmp("bruh!", "bruh"));
	printf("%d\n", ft_strcmp("bruh", "bru"));
	printf("%d\n", ft_strcmp("bru", "bruh"));
	printf("%d\n", ft_strcmp("bruh", "bruh"));
}
 */