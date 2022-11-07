/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:08:22 by gode-jes          #+#    #+#             */
/*   Updated: 2022/10/27 10:23:32 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*array;

	array = (void *) malloc(nelem * elsize);
	if (array == 0)
		return (array);
	ft_bzero(array, nelem * elsize);
	return (array);
}
