/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gode-jes <gode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:27:14 by gode-jes          #+#    #+#             */
/*   Updated: 2022/10/27 11:53:25 by gode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	signal;
	int	i;
	int	res;

	signal = 1;
	i = 0;
	if (nptr[i] == '\0')
		return (0);
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
	}
	res = 0;
	while (ft_isdigit(nptr[i]))
	{
		res = (res * 10) + (ft_isdigit(nptr[i]) - '0');
		i++;
	}
	return (res * signal);
}
