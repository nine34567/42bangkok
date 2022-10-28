/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thphomph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:46:13 by thphomph          #+#    #+#             */
/*   Updated: 2022/10/24 12:04:47 by thphomph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (((i * i) < nb) && (i <= (nb / 2)) && (i <= 46340))
	{
		i++;
	}
	if ((i * i) == nb)
	{
		return (i);
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	int i;

	i = -2;
	while (i != 10)
	{
		printf("%d ", ft_sqrt(i));
		i++;
	}
}
*/