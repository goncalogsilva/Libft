/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:58:35 by gode-jes          #+#    #+#             */
/*   Updated: 2022/11/09 12:15:54 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (len == 0 && !big)
		return (NULL);
	if (little[i] == '\0')
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && big[i + j] == little[j])
		{
			if (j == ft_strlen(little) - 1)
				return ((char *)(big + i));
			j++;
		}
		i++;
	}
	return (NULL);
}
