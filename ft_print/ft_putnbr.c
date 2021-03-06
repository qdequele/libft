/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:04:57 by qdequele          #+#    #+#             */
/*   Updated: 2017/10/03 11:43:43 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			n = -n;
			ft_putchar('-');
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else
		{
			ft_putchar('0' + n);
		}
	}
}

void	ft_putuint(size_t n)
{
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar('0' + n);
	}
}

void	ft_putnbr_c(char *color, int n)
{
	ft_putstr(color);
	ft_putnbr(n);
	ft_putstr("\e[0m");
}

void	ft_putuint_c(char *color, size_t n)
{
	ft_putstr(color);
	ft_putnbr(n);
	ft_putstr("\e[0m");
}
