/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:36:22 by nbenhado          #+#    #+#             */
/*   Updated: 2021/07/15 16:35:36 by nbenhado         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lendest;	
	unsigned int	lensrc;
	unsigned int	i;

	i = -1;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc);
	if (size <= lensrc)
		return (size + lensrc);
	while (size && (size - lendest) && src[++i])
	{
		dest[lendest + i] = src[i];
		size--;
	}		
	dest[lendest + i] = '\0';
	return (lensrc + lendest);
}
