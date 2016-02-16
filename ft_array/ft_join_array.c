/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 10:46:17 by qdequele          #+#    #+#             */
/*   Updated: 2016/02/16 11:14:23 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
** NAME : ft_join_aos (unnoficial)
** DESCRIPTION : Ajoute une ligne a un nouveau tableau de chaine de caractere.\
** La nouvelle ligne dois deja etre allouée
** PARAM : last_array -> Le tableau dans lequel il faut ajouter la ligne
** PARAM : to_add -> la ligne a ajouter
** RETURN : Le nouveau tableau
*/

char	***ft_join_aos(char ***last_array, char **to_add)
{
	char	***new_array;
	int		i;
	int		height;

	i = 0;
	height = ft_count_column_aos(last_array);
	new_array = (char ***)malloc(sizeof(char**) * (height + 1));
	while (i < height)
	{
		new_array[i] = last_array[i];
		i++;
	}
	new_array[i] = to_add;
	return (new_array);
}

/*
** NAME : ft_join_aoc (unnoficial)
** DESCRIPTION : Ajoute une ligne a un nouveau tableau de caractere.\
** La nouvelle ligne dois deja etre allouée
** PARAM : last_array -> Le tableau dans lequel il faut ajouter la ligne
** PARAM : to_add -> la ligne a ajouter
** RETURN : Le nouveau tableau
*/

char	**ft_join_aoc(char **last_array, char *to_add)
{
	char	**new_array;
	int		i;
	int		height;

	i = 0;
	height = ft_count_column_aoc(last_array);
	new_array = (char **)malloc(sizeof(char*) * (height + 1));
	while (i < height)
	{
		new_array[i] = last_array[i];
		i++;
	}
	new_array[i] = to_add;
	return (new_array);
}

/*
** NAME : ft_join_aoi (unnoficial)
** DESCRIPTION : Ajoute une ligne a un nouveau tableau d'entier.\
** La nouvelle ligne dois deja etre allouée
** PARAM : last_array -> Le tableau dans lequel il faut ajouter la ligne
** PARAM : to_add -> la ligne a ajouter
** RETURN : Le nouveau tableau
*/

int		**ft_join_aoi(int **last_array, int *to_add)
{
	int		**new_array;
	int		i;
	int		height;

	i = 0;
	height = ft_count_column_aoi(last_array);
	new_array = (int **)malloc(sizeof(int *) * (height + 1));
	while (i < height)
	{
		new_array[i] = last_array[i];
		i++;
	}
	new_array[i] = to_add;
	return (new_array);
}
