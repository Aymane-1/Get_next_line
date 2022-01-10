/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 17:52:15 by aechafii          #+#    #+#             */
/*   Updated: 2022/01/08 17:36:42 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
 	static char *buffer;
	char *line;
	//printf("%s", buffer);
	if(BUFFER_SIZE <=0 || fd < 0)
		return(NULL);
	buffer = ft_is_read(buffer, fd);
	//printf("buffer : %s", buffer);
	line = ft_is_the_line(buffer);
	//printf("line : %s", line);
	buffer = ft_is_the_rest(buffer);
	//printf("the rest = %s" , buffer);
	return(line);
}

// int main()
// {
// 	int fd;
// 	fd = open("file", O_RDWR);
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));
// 	printf("%s", get_next_line(fd));


// }
