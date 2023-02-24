/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okraus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:38:15 by okraus            #+#    #+#             */
/*   Updated: 2023/01/28 12:42:21 by okraus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_char(char *s, char c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			return (1);
		}
		else
		{
			i++;
		}
	}
	return (0);
}

/*
int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}
*/

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*s3;

	j = ft_strlen(s1);
	i = ft_strlen(s2);
	s3 = (char *)malloc((i + j + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2 && s2[i])
	{
		s3[i + j] = s2[i];
		i++;
	}
	s3[i + j] = 0;
	free (s1);
	return (s3);
}
