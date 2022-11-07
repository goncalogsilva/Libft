/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:45:12 by gode-jes          #+#    #+#             */
/*   Updated: 2022/10/27 11:42:58 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*res;

	res = (unsigned char *) dest;
	ft_memcpy(res, src, n);
	ft_memcpy(dest, res, n);
	return (dest);
}
