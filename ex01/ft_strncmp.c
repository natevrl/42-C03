/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:44:01 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/05 16:13:54 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	unsigned int	i;

	i = 1;
	while (i < n)
	{
		if (*s1 == '\0')
			break ;
		if (*s1 == *s2)
		{
			if (i == n)
				break ;
			s1++;
			s2++;
			i++;
		}
		else
			break ;
	}
	if (*s2 == *s1)
		return (0);
	else if (*s1 > *s2)
		return (1);
	else
		return (-1);
}
