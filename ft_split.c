/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:51:47 by gode-jes          #+#    #+#             */
/*   Updated: 2022/11/07 13:15:26 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>*/

int	count_words(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s != '\0')
	{
		if (*s != c)
			cnt++;
		while (*s != c && *s != '\0')
			s++;
		if (*s == '\0')
			break ;
		s++;
	}
	return (cnt);
}

int	*size_words(char const *s, char c)
{
	int	*res;
	int	cnt;
	int	i;
	int	num;

	num = count_words(s, c);
	res = (int *) malloc (num * sizeof(int));
	i = 0;
	while (*s != '\0')
	{
		cnt = 0;
		while (*s != c && *s != '\0')
		{
			s++;
			cnt++;
		}
		res[i] = cnt;
		if (*s == '\0')
			break ;
		i++;
		s++;
	}
	return (res);
}

char	**aloc_table(int num, int *size)
{
	char	**res;
	int		i;

	res = (char **) malloc (num * sizeof(char *) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (i < num)
	{
		res[i] = (char *) malloc (size[i] * sizeof(char) + 1);
		if (!res[i])
			return (NULL);
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		num;
	int		*array;
	char	**words;
	int		i;
	int		j;

	num = count_words(s, c);
	array = size_words(s, c);
	words = aloc_table(num, array);
	i = 0;
	while (*s != '\0')
	{
		j = 0;
		while (*s != c && *s != '\0')
			words[i][j++] = *s++;
		words[i][j] = '\0';
		if (*s == '\0')
			break ;
		i++;
		s++;
	}
	return (words);
}

/*int	main(void)
{
	char	*string = "ola tudo bem sou eu";
	char	**res;
	int		i;

	res = ft_split(string, ' ');
	i = 0;
	while (i < 5)
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}*/
