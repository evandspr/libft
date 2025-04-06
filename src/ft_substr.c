/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:23:52 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 20:00:03 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*dest;
	unsigned int		i;
	unsigned int		lens;
	unsigned int		mallocsize;

	i = 0;
	lens = 0;
	while (s[lens])
		lens++;
	if (len >= lens - start && lens > 0 && lens >= start)
		mallocsize = lens - start + 1;
	else if ((lens == 0) || (start >= lens))
		mallocsize = 1;
	else
		mallocsize = len + 1;
	dest = (char *)malloc(sizeof(char) * mallocsize);
	if (!dest)
		return (0);
	i = 0;
	while (((size_t)i != len) && i != lens && start <= lens)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
