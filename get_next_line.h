/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 16:32:17 by aechafii          #+#    #+#             */
/*   Updated: 2021/12/31 18:45:02 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define	GET_NEXT_LINE_H

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char	*get_next_line(int fd);
size_t	ft_is_end_of_line(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int n);
char	*ft_strjoin( char *s1,  char *s2);
#endif

