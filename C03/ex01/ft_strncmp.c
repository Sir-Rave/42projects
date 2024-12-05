/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:58:40 by bechrist          #+#    #+#             */
/*   Updated: 2024/12/02 21:51:27 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]) && n > i)
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/* int	main(void)
{
	printf("%d\n", ft_strncmp("dan0", "dan1", 3));
}
 */