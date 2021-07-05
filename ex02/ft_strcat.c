/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 15:47:51 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/05 16:17:46 by nbenhado         ###   ########.fr       */
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

char	*ft_strcat(char	*dest, char	*src)
{
	int	max;

	max = ft_strlen(dest);
	while (*src)
	{
		dest[max] = *src;
		max++;
		src++;
	}
	dest[max] = '\0';
	return (dest);
}
