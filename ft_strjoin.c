/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:17:45 by gode-jes          #+#    #+#             */
/*   Updated: 2022/11/07 13:11:15 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	size_s1;
	size_t	size_s2;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	str = (char *) malloc(size_s1 + size_s2 + 1);
	if (str == 0)
		return (NULL);
	ft_strlcpy(str, s1, size_s1 + 1);
	ft_strlcpy(str + size_s1, s2, size_s2 + 1);
	return (str);
}
