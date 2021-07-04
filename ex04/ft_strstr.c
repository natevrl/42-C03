/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:24:26 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/04 19:15:44 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

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

char *ft_strstr(char *str, char *to_find)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			while (str[i] == *to_find)
			{
				i++;
				to_find++;
				if (*to_find == '\0')
					return (to_find);
			}
		}
			
		i++;
	}
	return "nop";
}



int main()
{
	char s1[100] = "qqfwefew acbefsefsf";
	char s2[100] = "acb";
	char s12[100] = "ab";
	char s22[100] = "123";
	//printf("%s\n", strstr(s1 , s2));
	printf("%s\n", ft_strstr(s1 , s2));
}
