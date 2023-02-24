/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:57:55 by okraus            #+#    #+#             */
/*   Updated: 2023/01/11 13:57:58 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!size && !dst)
		return (0);
	while (dst[i] && i <= size)
		i++;
	while (src[j] && i + j + 1 < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (size > i + j)
		dst[i + j] = 0;
	while (src[j])
		j++;
	if (i >= size)
		return (j + size);
	return (i + j);
}
