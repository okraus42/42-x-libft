/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 14:44:51 by okraus            #+#    #+#             */
/*   Updated: 2023/01/11 14:44:55 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i])
	{	
		if (str[i] == (c % 256))
			return ((char *)&str[i]);
		i++;
	}
	if (str[i] == (c % 256))
		return ((char *)&str[i]);
	return (NULL);
}
