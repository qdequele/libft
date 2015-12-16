/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 10:53:07 by qdequele          #+#    #+#             */
/*   Updated: 2015/11/27 11:01:27 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*str;

	if (!dest || !src)
		return (NULL);
	str = (char *)malloc(sizeof(char) * len);
	ft_memcpy(str, src, len);
	ft_memcpy(dest, str, len);
	free(str);
	return (dest);
}
