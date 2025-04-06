/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:26:19 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 19:59:21 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendest;
	size_t	s;

	lendest = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	while (dest[lendest] != '\0')
		lendest++;
	i = 0;
	j = lendest;
	if (size <= lendest)
		return (s + size);
	while (src[i] != '\0' && i < size - lendest - 1)
	{
		dest[lendest + i] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (s + lendest);
}
