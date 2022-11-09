/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:51:47 by gode-jes          #+#    #+#             */
/*   Updated: 2022/11/09 12:36:29 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdlib.h>
#include <stdio.h>*/

static int	count_words(char const *s, char c)
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

static int	*size_words(char const *s, char c, int num)
{
	int	*res;
	int	cnt;
	int	i;

	res = (int *) malloc (num * sizeof(int));
	if (!res)
		return (NULL);
	i = 0;
	while (*s != '\0' && i < num)
	{
		cnt = 0;
		while (*s == c)
			s++;
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

static char	**aloc_table(int num, int *size)
{
	char	**res;
	int		i;

	res = (char **) malloc ((num + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	while (i < num)
	{
		res[i] = (char *) malloc ((size[i] + 1) * sizeof(char));
		if (!res[i])
			return (NULL);
		i++;
	}
	free(size);
	return (res);
}

static void	fill(char const *s, char c, char **words, int num)
{
	int	i;
	int	j;

	i = 0;
	while (*s != '\0' && i < num)
	{
		j = 0;
		while (*s == c)
			s++;
		while (*s != c && *s != '\0')
			words[i][j++] = *s++;
		words[i++][j] = '\0';
		if (*s == '\0')
			break ;
		s++;
	}
}

char	**ft_split(char const *s, char c)
{
	int		num;
	int		*array;
	char	**words;

	num = count_words(s, c);
	array = size_words(s, c, num);
	words = aloc_table(num, array);
	if (!words)
		return (NULL);
	fill(s, c, words, num);
	words[num] = NULL;
	return (words);
}

/*int	main(void)
{
	char	*string = "      split       this for   me  !       ";
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
