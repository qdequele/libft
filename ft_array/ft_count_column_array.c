/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_column_array.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 10:32:29 by qdequele          #+#    #+#             */
/*   Updated: 2016/02/16 10:43:36 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_count_column_aoc(char **tab)
{
	int		i;

	i = 0;
	while (tab[0][i])
		i++;
	return (i);
}

int		ft_count_column_aos(char ***tab)
{
	int		i;

	i = 0;
	while (tab[0][i])
		i++;
	return (i);
}

int		ft_count_column_aoi(int **tab)
{
	int		i;

	i = 0;
	while (tab[0][i])
		i++;
	return (i);
}
