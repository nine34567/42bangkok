/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manakara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:40:28 by manakara          #+#    #+#             */
/*   Updated: 2022/10/26 17:03:34 by manakara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (str[i])
	{
		if (str[i] == '\0')
		{
			break ;
		}
		if (!(str[i] >= ' ' && str[i] <= 126))
		{
			a = 0;
			break ;
		}
		i++;
	}
	return (a);
}
