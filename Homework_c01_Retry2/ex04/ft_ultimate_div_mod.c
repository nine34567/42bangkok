/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manakara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:00:15 by manakara          #+#    #+#             */
/*   Updated: 2022/10/27 14:34:16 by manakara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ultimate;

	ultimate = *a;
	*a = *a / *b;
	*b = ultimate % *b;
}

/*#include<stdio.h>
int main()
{
	int a = 5;
	int b = 3;
	int *div = malloc(20);
	int *mod = malloc(20);
	ft_div_mod (a, b,div ,mod);
	printf("%d\n",*div);
	printf("%d\n",*mod);
}*/
