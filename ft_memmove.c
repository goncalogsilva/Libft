/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:45:12 by gode-jes          #+#    #+#             */
/*   Updated: 2022/11/09 10:46:48 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest;
	unsigned char	*psrc;

	if (dest == NULL && src == NULL)
		return (NULL);
	pdest = (unsigned char *) dest;
	psrc = (unsigned char *) src;
	if (pdest < psrc)
		return (ft_memcpy(dest, src, n));
	while (n > 0)
	{
		n--;
		pdest[n] = psrc[n];
	}
	return (pdest);
}
