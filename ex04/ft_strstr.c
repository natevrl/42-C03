/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:24:26 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/06 18:22:17 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break ;
	}
	return (*s1 - *s2);
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

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	max;

	i = 0;
	max = ft_strlen(to_find);
	if (ft_strlen(to_find) > ft_strlen(str))
		return (0);
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			while (str[i] == *to_find)
			{
				i++;
				to_find++;
				if (*to_find == '\0')
					return (&str[i - max]);
			}
		}
		i++;
	}
	return (0);
}
