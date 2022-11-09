/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:12:31 by gode-jes          #+#    #+#             */
/*   Updated: 2022/11/09 12:36:13 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print(int j, int fd)
{
	char	n;

	n = j + '0';
	write(fd, &n, 1);
}

static long int	multiplicador(long int i, int nb)
{
	i = 10;
	while (nb / i != 0)
	{
		i = i * 10;
	}
	i = i / 10;
	return (i);
}

void	ft_putnbr_fd(int nb, int fd)
{
	long int	i;
	int			j;
	long int	num;

	num = nb;
	if (num < 0)
	{
		write(fd, "-", 1);
		num = -num;
	}
	i = 10;
	i = multiplicador(i, num);
	while (i >= 1)
	{
		j = num / i;
		print(j, fd);
		num = num - (j * i);
		i = i / 10;
	}
}
