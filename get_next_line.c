/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 17:52:15 by aechafii          #+#    #+#             */
/*   Updated: 2022/01/01 20:35:54 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	int re;
	char *buffer;
	char *str;

	buffer = malloc(BUFFER_SIZE + 1);
	str = NULL;
	re = read(fd, buffer, BUFFER_SIZE);
	buffer[re] = 0; 
	str = ft_strjoin(buffer, str);
	return(buffer);
}
int main()
{
	int fd;
	fd = open("file", O_RDWR);
	printf("%s", get_next_line(fd));
}
