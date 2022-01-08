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
	static int re;
	int i;
	int j;
	char *buffer;
	char *str;

	i = 0;
	j = 0;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	re = read(fd, buffer, BUFFER_SIZE);
	printf("%d\n", re);
	buffer[re] = '\0';
	str = (char *)malloc(sizeof(char) * (re + 1));
	if (!str)
		return(NULL);
	while(i < re && buffer[j] != '\n')
		str[i++] = buffer[j++];
	str[i] = '\0';
	//printf("%d\n", re);
	return(str);
}

int main()
{
	int fd;
	fd = open("file", O_RDWR);
	printf("%s", get_next_line(fd));
}
