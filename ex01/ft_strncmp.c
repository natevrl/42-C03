/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:44:01 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/06 18:37:52 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	return_value(int	i, int	n)
{
	if (i == n)
		return (0);
	else if (i > n)
		return (1);
	else
		return (-1);
}

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	unsigned int	i;

	i = 1;
	if (n == 0)
		return (0);
	else if (n == 1)
		return (*s1 - *s2);
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	while (i <= n || *s1)
	{
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
	return (return_value(*s1, *s2));
}
