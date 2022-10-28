/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manakara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:19:02 by manakara          #+#    #+#             */
/*   Updated: 2022/10/27 21:27:43 by manakara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	ft_compute_final_length(char **strings, int size, int sep_length)
{
	int	final_length;
	int	index;

	final_length = 0;
	index = 0;
	while (index < size)
	{
		final_length += ft_str_length(strings[index]);
		final_length += sep_length;
		index++;
	}
	final_length -= sep_length;
	return (final_length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_length;
	int		index;
	char	*string;
	char	*tmp;

	if (size == 0)
		return ((char *)malloc(sizeof(char) * 1));
	full_length = ft_compute_final_length(strs, size, ft_str_length(sep));
		string = (char *)malloc((full_length + 1) * sizeof(char));
	if (!string)
		return (0);
	tmp = string;
	index = -1;
	while (++index < size)
	{
		ft_strcpy(string, strs[index]);
		string += ft_str_length(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(string, sep);
			string += ft_str_length(sep);
		}
	}
	*string = '\0';
	return (tmp);
}
