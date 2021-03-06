/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:10:47 by qdequele          #+#    #+#             */
/*   Updated: 2017/10/03 16:00:14 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_itoa(int t)
{
	char			*str;
	size_t			len;
	size_t			neg;
	long long int	n;

	n = t;
	len = ft_nbrlen(n);
	neg = ft_isnegative(n);
	str = (char *)malloc(sizeof(char) * (neg + len + 1));
	if (str == NULL)
		return (NULL);
	str[len + neg] = '\0';
	if (neg)
	{
		str[0] = '-';
		n = -n;
	}
	while ((len-- + neg) > neg)
	{
		str[len + neg] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

char	*ft_uitoa(size_t t)
{
	char			*str;
	size_t			len;
	long long int	n;

	n = t;
	len = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while ((len--) > 0)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
