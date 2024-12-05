/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bechrist <bechrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:31:55 by bechrist          #+#    #+#             */
/*   Updated: 2024/12/03 22:01:22 by bechrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	s1;
	unsigned int	s2;

	s1 = 0;
	s2 = 0;
	while (dest[s1] != '\0')
	{
		s1++;
	}
	while (src[s2] != '\0' && (s2 < nb))
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

	ft_strncat(dest, src, 4);
	printf("%s\n", dest);
	return (0);
}
 */