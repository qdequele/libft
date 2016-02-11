/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:15:30 by qdequele          #+#    #+#             */
/*   Updated: 2015/12/01 12:36:15 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
** NAME : strcut (unofficial)
** DESCRIPTION : La fonction ft_strcut() coupe la chaine au caractere 'c'
** met dans 's1' le debut de la chaine et dans 's2' le reste. La chaine de
** depart qui aura l'origine sera 's2'
** PARAM : s1 -> la chaine dans laquel sera mis le debut de la chaine tronque
** PARAM : s2 -> la chaine dans laquel sera mis la fin de la chaine tronque
*/

void	ft_strcut(char **s1, char **s2, char c)
{
	char	**tab;

	tab = ft_strsplit(*s2, c);
	*s1 = tab[0];
	*s2 = ft_strsub(*s2, ft_strlen(*s1) + 1, ft_strlen(*s2) - ft_strlen(*s1));
}
