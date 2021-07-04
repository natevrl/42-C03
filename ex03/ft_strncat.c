/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:40:55 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/04 17:16:45 by nbenhado         ###   ########.fr       */
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

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i = 0;
	int max = ft_strlen(dest);
	while(i < nb)
	{
		dest[max] = src[i];
		max++;
		i++;

	}
	dest[max] = '\0';
	return (dest);
}


int main()
{
	char s1[100] = "ab";
	char s12[100] = "ab";
	char s22[100] = "123";
	char s2[100] = "123";
	printf("%s\n", ft_strncat(s12 , s22, 1));
	printf("%s\n", strncat(s1 , s2, 1));
}

