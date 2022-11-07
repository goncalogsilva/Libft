/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:33:00 by gode-jes          #+#    #+#             */
/*   Updated: 2022/10/27 15:49:41 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char const *set, char c)
{
	int		i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	k;

	if (s1 == 0 || set == 0)
		return (NULL);
	i = 0;
	while (check_set(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (check_set(set, s1[j - 1]) && i < j)
		j--;
	str = (char *) malloc((j - i + 1) * sizeof(char));
	if (str == 0)
		return (NULL);
	k = 0;
	while (i < j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
