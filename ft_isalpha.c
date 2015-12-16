/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:42:07 by qdequele          #+#    #+#             */
/*   Updated: 2015/11/24 16:22:01 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int		ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int		ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
