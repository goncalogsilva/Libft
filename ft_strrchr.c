/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:08:30 by gode-jes          #+#    #+#             */
/*   Updated: 2022/10/25 14:46:35 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	p = (char *) s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char) c)
			return (p + i);
		i--;
	}
	if (s[i] == (unsigned char) c)
		return (p + i);
	return (NULL);
}
