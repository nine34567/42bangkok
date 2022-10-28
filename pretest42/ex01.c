/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manakara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:33:59 by manakara          #+#    #+#             */
/*   Updated: 2022/10/28 01:09:32 by manakara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_numbers(void)
{
	char digit;

	digit ='0';
	while(digit <= '7')
	{
		write(1, &digit, 1);
		digit++;
	}
}
int main()
{
       ft_print_numbers();	
}
