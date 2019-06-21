/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcntlastchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlmpofu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:43:38 by mlmpofu           #+#    #+#             */
/*   Updated: 2019/06/14 13:05:10 by mlmpofu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strcntlastchar(char *str, const char *charset)
{
	unsigned int			i;
	int						index;
	unsigned int			count;
	unsigned int			tmp;

	count = 0;
	i = (unsigned int)ft_strlen(str) - 1;
	while (str[i])
	{
		index = 0;
		tmp = count;
		while (charset[index])
		{
			if (charset[index++] == str[i])
			{
				count++;
			}
		}
		if (count == tmp)
		{
			return (count);
		}
		i--;
	}
	return (count);
}
