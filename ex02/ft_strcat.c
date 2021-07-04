/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:47:51 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/04 17:17:30 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strlen(char	*str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int max = ft_strlen(dest);
	while(*src)
	{
		dest[max] = *src;
		max++;
		src++;

	}
	dest[max] = '\0';
	return (dest);
}


int main()
{
	char s1[100] = "abc awd ";
	char s2[100] = "123";
	printf("%s\n", ft_strcat(s1 , s2));
	//printf("%s\n", strcat(s1 , s2));
}
