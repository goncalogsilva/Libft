/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:23:34 by gode-jes          #+#    #+#             */
/*   Updated: 2022/10/26 12:52:30 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size_dst;
	size_t	size_src;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (size_dst >= size)
		return (size_src + size);
	if (size > 0)
	{
		while (i < size - size_dst - 1 && src[i] != '\0')
		{
			dst[size_dst + i] = src[i];
			i++;
		}
		dst[size_dst + i] = '\0';
	}
	return (size_dst + size_src);
}
