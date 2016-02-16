/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 10:23:44 by qdequele          #+#    #+#             */
/*   Updated: 2016/02/16 11:01:17 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_print_aoc(char **array)
{
	int		i;
	int		j;

	i = 0;
	while (array[i])
	{
		j = 0;
		while (array[i][j])
		{
			ft_putchar(array[i][j]);
			ft_putchar('\t');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_print_aoi(int **array)
{
	int		i;
	int		j;

	i = 0;
	while (array[i])
	{
		j = 0;
		while (array[i][j])
		{
			ft_putnbr(array[i][j]);
			ft_putchar('\t');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_print_aos(char ***array)
{
	int		i;
	int		j;

	i = 0;
	while (array[i])
	{
		j = 0;
		while (array[i][j])
		{
			ft_putstr(array[i][j]);
			ft_putchar('\t');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
