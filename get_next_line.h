/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdor <mdor@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:21:42 by mdor              #+#    #+#             */
/*   Updated: 2024/11/05 18:43:13 by mdor             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 666
# endif

size_t		ft_strlen(const char *str);
char		*ft_strjoin(char *stock, char *buff);
char		*ft_strchr(char *s, int c);
char		*get_next_line(int fd);
void		*protect(char *arg1, char *arg2);
char		*ft_strdup(const char *s1);

#endif 
