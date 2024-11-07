/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbriche <sbriche@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:56:37 by sbriche           #+#    #+#             */
/*   Updated: 2023/12/07 16:02:09 by sbriche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# define LINE_SEP '\n'

char	*get_next_line(int fd);
int		ft_strlen(char *str);
int		ft_strchr(const char *s, int c);
char	*ft_strdup_nl(char const *s, int start, int stop);
char	*ft_strdup(const char *s);
char	*ft_str_add(char *s1, char *s2, int size);

#endif
