/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:43:26 by qdequele          #+#    #+#             */
/*   Updated: 2015/12/05 17:44:34 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned char	c2;
	unsigned int	i;

	if (n == 0 || !src)
		return (NULL);
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s1[i] == c2)
			return (&s1[i + 1]);
		i++;
	}
	return (NULL);
}
