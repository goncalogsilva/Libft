/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:05:39 by gode-jes          #+#    #+#             */
/*   Updated: 2022/10/26 10:59:56 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (dest == NULL && src == NULL)
		return (NULL);
	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (pdest);
}
