/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:34:28 by qdequele          #+#    #+#             */
/*   Updated: 2015/12/05 14:10:11 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	s2 = (char *)malloc(sizeof(char) * len);
	if (s2 == NULL)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[i + start];
		i++;
	}
	return (s2);
}
