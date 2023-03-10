/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:59:26 by okraus            #+#    #+#             */
/*   Updated: 2023/03/02 11:28:40 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string;
	unsigned int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	string = (char *)malloc((i + 1) * sizeof(char));
	if (string == NULL)
		return (string);
	i = 0;
	while (s[i])
	{
		string[i] = (*f)(i, s[i]);
		i++;
	}
	string[i] = 0;
	return (string);
}
