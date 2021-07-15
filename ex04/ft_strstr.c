/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:24:26 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/06 22:10:25 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	max;
	int	j;

	i = 0;
	max = ft_strlen(to_find);
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i] == to_find[j])
			{
				if (j == max - 1)
					return (str + (i - j));
				i++;
				j++;
			}
		}
		else
			i++;
	}
	return (0);
}


#include <string.h>
#include <stdio.h>


int	main(void)
{
	printf("\t\tEx04: \n");
	
	printf("Test de ft_strstr sur '', '' : %s\n", ft_strstr("awdawdabawdawdabcKK", "abc"));
	printf("Test de strstr sur '', '' : %s\n", strstr("awdawdabawdawdabcKK", "abc"));
}
