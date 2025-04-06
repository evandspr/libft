/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesprez <edesprez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 11:26:59 by edesprez          #+#    #+#             */
/*   Updated: 2025/04/06 19:59:59 by edesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char	*skip_first(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	len_s1;
	int	len_set;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	while (((i != len_s1) && (j != len_set)) && len_set != 0)
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return ((char *)&s1[i]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			j;
	int			len_s1;
	int			len_set;

	j = 0;
	s1 = skip_first(s1, set);
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	if (len_s1 != 0)
		len_s1 -= 1;
	while (len_s1 >= 0 && j < len_set)
	{
		if (s1[len_s1] == set[j] && j < len_set)
		{
			len_s1--;
			j = 0;
		}
		else
			j++;
	}
	return (ft_substr(s1, 0, len_s1 + 1));
}
