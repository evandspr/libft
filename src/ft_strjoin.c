/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 10:05:05 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 19:58:57 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*ft_concat(char const *s1, char const *s2, int lens1, int lens2)
{
	int		i;
	int		y;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (lens1 + lens2 + 1));
	i = 0;
	y = 0;
	if (!dest)
		return (0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		dest[i] = s2[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	return (ft_concat(s1, s2, lens1, lens2));
}
