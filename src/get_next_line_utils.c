/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:59:14 by edesprez          #+#    #+#             */
/*   Updated: 2025/05/03 03:25:45 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		i;
	int		size;

	i = 0;
	size = 0;
	while (src[i])
	{
		size++;
		i++;
	}
	i = 0;
	dup = (char *) malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (0);
	if ((*src) || !(src == 0))
	{
		while (i != size)
		{
			dup[i] = src[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*dest;
	unsigned int		i;
	unsigned int		lens;
	unsigned int		mallocsize;

	i = 0;
	lens = 0;
	if (!s)
		return (0);
	while (s[lens])
		lens++;
	if (len >= lens - start && lens > 0 && lens >= start)
		mallocsize = lens - start + 1;
	else if ((lens == 0) || (start >= lens))
		mallocsize = 1;
	else
		mallocsize = len + 1;
	dest = (char *)malloc(sizeof(char) * (mallocsize + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (((size_t)i != len) && i != lens && start <= lens)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		y;
	char	*dest;

	if (!s1 || !s2)
		return (0);
	dest = (char *)malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!dest)
		return (0);
	i = 0;
	y = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[y])
		dest[i++] = s2[y++];
	dest[i] = '\0';
	return (dest);
}
