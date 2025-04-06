/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:06:03 by edesprez          #+#    #+#             */
/*   Updated: 2024/11/21 10:38:20 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

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
/*#include <stdio.h>

int	main(void)
{
	char s[] = "test";
	char *dup= ft_strdup(s);
	printf("%s", "STRING DE BASE :");
	printf("%s", s);
	printf("%s", "\n");
	printf("%s", "STRING DUP :");
	printf("%s", dup);
}*/
