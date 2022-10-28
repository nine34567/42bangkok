/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manakara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:57:27 by manakara          #+#    #+#             */
/*   Updated: 2022/10/27 15:31:23 by manakara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	count;
	int	mem;

	count = 1;
	mem = 1;
	if (nb < 0)
		mem = 0;
	while (count <= nb && nb >= 0)
	{
		mem *= count;
		count++;
	}
	return (mem);
}
