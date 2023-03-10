/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 10:23:38 by okraus            #+#    #+#             */
/*   Updated: 2023/03/02 11:28:40 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*src_str;
	char	*dest_str;

	src_str = (char *)src;
	dest_str = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (dest);
	while (i < n)
	{
		dest_str[i] = src_str[i];
		i++;
	}
	return (dest);
}
