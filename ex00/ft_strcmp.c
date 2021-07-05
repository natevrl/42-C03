/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 23:01:47 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/05 11:21:39 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
 #include <string.h>


int ft_strcmp(char *s1, char *s2)
{
	int i;
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break;
	}
	
	if (*s1 > *s2)
		return 1;
	else if (*s2 == * s1)
		return 0;
	else 
		return -1;
}


int	main(void)
{
printf("\t\tEx00: \n");

    printf("Valeur retour vraie fonction : %d\n", strcmp("ABCD", "ABCDE"));
    printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("ABCD", "ABCDE"));

    printf("Valeur retour vraie fonction : %d\n", strcmp("08hjklMM", "abcd"));
    printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("08hjklMM", "abcd"));

    printf("Valeur retour vraie fonction : %d\n", strcmp("ABC", "ABC"));
    printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("ABC", "ABC"));

    printf("Valeur retour vraie fonction : %d\n", strcmp("\n\tookLM", "\t\nKKK"));
    printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("\n\tookLM", "\t\nKKK"));

    printf("Valeur retour vraie fonction : %d\n", strcmp("\n\tookLM", ""));
    printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("\n\tookLM", ""));

    printf("Valeur retour vraie fonction : %d\n", strcmp("", "abcd"));
    printf("Valeur retour de ma fonction : %d\n\n", ft_strcmp("", "abcd"));
}
