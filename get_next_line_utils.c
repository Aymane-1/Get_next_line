/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 18:09:08 by aechafii          #+#    #+#             */
/*   Updated: 2022/01/01 20:38:42 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_is_end_of_line(char *str)
{
	int i;

	i = -1;
	while(str[++i])
	{
		if(str[i] == '\n')
		return (1);
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

size_t	ft_strlen(const char *str)
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
	size_t	i;
	size_t	j;
	int		dest_len;
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
	
	dest_len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
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

