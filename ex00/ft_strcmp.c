/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 23:01:47 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/04 14:48:19 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
 #include <string.h>


int ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (*s1)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break;
	}
	return *s1 - *s2;
}


int main()
{
	char s1[] = "abc";
	char s2[] = "absdwdawd";
	printf("%d\n", ft_strcmp(s1 , s2));
	printf("%d", strcmp(s1 , s2));
}
