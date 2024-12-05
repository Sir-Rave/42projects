/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:33:10 by bechrist          #+#    #+#             */
/*   Updated: 2024/12/03 17:28:56 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	s1;
	int	s2;

	s1 = 0;
	s2 = 0;
	while (dest[s1] != '\0')
	{
		s1++;
	}
	while (src[s2] != '\0')
	{
		dest[s1++] = src[s2++];
	}
	dest[s1] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	dest[20] = "Deez ";
	char	src[] = "nuts!";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
 */