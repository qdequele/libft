/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdequele <qdequele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/16 11:19:53 by qdequele          #+#    #+#             */
/*   Updated: 2016/02/16 11:29:02 by qdequele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H
# define BUFF_SIZE 64

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_get_next_line(int const fd, char **line);
char	*ft_itoa(int n);
char	*ft_itoa_base(int nb, int base);
int		ft_nbrlen(int nb);
int		ft_nbrlen_base(int nb, int base);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_wordcount(char const *s, char c);
int		ft_wordlen(char const *s, char c);

#endif
