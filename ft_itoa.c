/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:41:49 by gode-jes          #+#    #+#             */
/*   Updated: 2022/11/09 12:37:08 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long int n)
{
	int			size;
	long int	i;

	if (n == 0)
		return (1);
	i = 1;
	size = 0;
	if (n < 0)
		n = -n;
	while ((n / i) > 0)
	{
		i = i * 10;
		size++;
	}
	return (size);
}

static char	*aloc_array(int size, long int n)
{
	char	*array;

	if (n < 0)
	{
		array = (char *) malloc(size * sizeof(char) + 2);
		if (!array)
			return (NULL);
		array[size + 1] = '\0';
	}
	else
	{
		array = (char *) malloc(size * sizeof(char) + 1);
		if (!array)
			return (NULL);
		array[size] = '\0';
	}
	return (array);
}

static long int	multiplicador(int size)
{
	int			i;
	long int	mult;

	if (size == 1)
		return (1);
	i = 1;
	mult = 10;
	while (i < size - 1)
	{
		mult = mult * 10;
		i++;
	}
	return (mult);
}

static void	calc(char *array, long int nb, long int mult, int size)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		array[i++] = '-';
		nb = -nb;
		size++;
	}
	while (i < size)
	{
		array[i++] = (nb / mult) + '0';
		nb = nb - ((nb / mult) * mult);
		mult = mult / 10;
	}
}

char	*ft_itoa(int n)
{
	int				size;
	long int		mult;
	long int		nb;
	char			*array;

	nb = (long int) n;
	size = count_digits(nb);
	array = aloc_array(size, nb);
	if (array == NULL)
		return (NULL);
	mult = multiplicador(size);
	calc(array, nb, mult, size);
	return (array);
}
