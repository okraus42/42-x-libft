/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:38:33 by okraus            #+#    #+#             */
/*   Updated: 2023/01/29 15:46:29 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 64
# endif

# include <unistd.h>
# include <stdlib.h>

char	*read_file(int fd, char *str);
char	*get(char *str);
char	*next(char *str);
char	*get_next_line(int fd);
int		ft_find_char(char *s, char c);
int		ft_strlen_gnl(char *s);
char	*ft_strjoin(char *s1, char *s2);

#endif
