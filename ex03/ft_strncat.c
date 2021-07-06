/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:40:55 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/06 18:39:47 by nbenhado         ###   ########.fr       */
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

char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	unsigned int	i;
	int				max;

	i = 0;
	max = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[max] = src[i];
		max++;
		i++;
	}
	dest[max] = '\0';
	return (dest);
}
