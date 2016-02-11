/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/11 11:21:59 by qdequele          #+#    #+#             */
/*   Updated: 2016/02/11 11:33:02 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		ft_get_next_line(int const fd, char **line)
{
	char			buf[BUF_SIZE + 1];
	static char		*str = NULL;
	static int		ret;

	if (fd < 0 || BUF_SIZE <= 0 || ret == -1)
		return (-1);
	str = (!str) ? ft_strnew(BUF_SIZE) : str;
	if (!ft_strchr(str, '\n'))
	{
		if ((ret = read(fd, buf, BUF_SIZE)) == 0)
			return (ft_strlen(str) > 0) ? ft_strcut(line, &str, '\0') : 0;
		buf[ret] = '\0';
		str = ft_strfjoin(str, buf);
		return (ft_get_next_line(fd, line));
	}
	else
		return (ft_strcut(line, &str, '\n'));
}
