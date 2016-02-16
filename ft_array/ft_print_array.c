/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 10:23:44 by qdequele          #+#    #+#             */
/*   Updated: 2016/02/16 11:16:47 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
** NAME : ft_print_aoc (unnoficial)
** DESCRIPTION : Affiche un tableau de caractere avec des '\n' entre chaques\
** colonnes
** PARAM : Le tableau a afficher
*/

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

/*
** NAME : ft_print_aoi (unnoficial)
** DESCRIPTION : Affiche un tableau d'entier avec des '\n' entre chaques\
** colonnes
** PARAM : Le tableau a afficher
*/

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

/*
** NAME : ft_print_aos (unnoficial)
** DESCRIPTION : Affiche un tableau de chaine de caractere avec des '\n' entre\
** chaques colonnes
** PARAM : Le tableau a afficher
*/

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
