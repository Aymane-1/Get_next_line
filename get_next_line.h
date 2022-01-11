/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:32:17 by aechafii          #+#    #+#             */
/*   Updated: 2022/01/11 22:56:36 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

char	*get_next_line(int fd);
int		ft_is_end_of_line(char *str);
char	*ft_is_the_line(char *str);
char	*ft_strjoin( char *s1, char *s2);
char	*ft_is_the_rest(char *str);
size_t	ft_strlen(char *str);
char	*ft_is_read(char *str, int fd);
#endif
