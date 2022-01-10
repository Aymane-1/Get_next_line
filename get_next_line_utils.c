/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:09:08 by aechafii          #+#    #+#             */
/*   Updated: 2022/01/08 17:36:46 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strjoin(char  *s1, char *s2)
{
	int	i;
	int	j;
	int	dest_len;
	char	*ptr;

	i = 0;
	j = 0;
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = 0;
	}
	if (!s2)
	{
		s2 = malloc(1);
		s2[0] = 0;
	}
	dest_len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (dest_len + 1));
	if (!ptr)
		return (ptr);
	while (s1[i])
	{	
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}

int	ft_is_end_of_line(char *str)
{
	int i;

	i = -1;
	if (!str)
		return(0);
	while(str[++i])
	{
		if(str[i] == '\n')
		return (1);
	}
	return (0);
}

char	*ft_is_the_rest(char *str)
{
	int i;
	int j;
	static char *rest;

	i = 0;
	j = 0;
	if(!str)
		return str;
	while(str[i] && str[i] != '\n')
			i++;
	if(str[i] == '\n')
		i++;
	rest = (char *)malloc((ft_strlen(str) - i + 1) * sizeof(char));
	if(!rest)
		return(NULL);
	while(str[i])
		rest[j++] = str[i++];
	rest[j] = '\0';
	//printf("rest :%s\n", rest);
	return(rest);
}

char *ft_is_the_line(char *str)
{
	int 	i;
	int		j;
	char	*buffer;

	i = 0;
	if(!str)
		return NULL;
	while(str[i] != '\0' && str[i] != '\n')
		i++;
	if(str[i] == '\n')
		i++;
	buffer = malloc(i + 1);
	if (!buffer)
		return(NULL);
	j = i;
	while(--i >= 0)
		buffer[i] = str[i];
	buffer[j] = '\0';
	free(str);
	return(buffer);	
}

char *ft_is_read(char *str, int fd)
{
	int 	i;
	char 	*buffer;

	i = 1;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return(NULL);
	while(i != 0 && ft_is_end_of_line(str) == 0)
	{
		i = read(fd, buffer, BUFFER_SIZE);
		if (i <= 0)
		{
			free(buffer);
			return(NULL);
		}
		buffer[i] = '\0';
		str = ft_strjoin(str, buffer);
		//printf("str : %s\n", str);
	}
	free(buffer);
	return(str);
}