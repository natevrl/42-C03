/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:44:01 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/04 15:45:57 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 


int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	while (n)
	{
		if (s1[i] == '\0')
			break;
		if (s1[i] == s2[i])
		{
			i++;
		}

		else
			break;
	}
	return s1[i] - s2[i];
}


int main()
{
	char s1[] = "ac";
	char s2[] = "ab";
	printf("%d\n", ft_strncmp(s1 , s2, 6));
	printf("%d", strncmp(s1 , s2, 6));
}
