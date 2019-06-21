/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlmpofu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:40:11 by mlmpofu           #+#    #+#             */
/*   Updated: 2019/06/10 14:47:42 by mlmpofu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*ptr;
	char	*ptr2;
	char	*result;

	if (!s || !(result = ft_memalloc((size_t)ft_strlen((char*)s) + 1)))
	{
		return (NULL);
	}
	ptr = (char*)s;
	ptr2 = result;
	while (*ptr)
	{
		*(ptr2++) = f(*(ptr++));
	}
	return (result);
}
