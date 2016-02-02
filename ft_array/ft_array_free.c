/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:15:30 by qdequele          #+#    #+#             */
/*   Updated: 2015/12/01 12:36:15 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void ft_array_free(char **arr)
{
	int		i;

	i = 0;
	while(arr[i])
	{
		free(arr[i]);
		i++;
	}
	if (arr)
		free(arr);
}