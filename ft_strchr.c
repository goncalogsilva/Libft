/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:35:29 by gode-jes          #+#    #+#             */
/*   Updated: 2022/10/25 14:40:50 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = (char *) s;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char) c)
			return (p + i);
		i++;
	}
	if (s[i] == (unsigned char) c)
		return (p + i);
	return (NULL);
}
