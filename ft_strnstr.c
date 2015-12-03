/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:08:57 by gahubaul          #+#    #+#             */
/*   Updated: 2015/11/30 17:08:57 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (!*s2)
		return ((char *)s1);
	i = ft_strlen(s2);
	while (*s1 && n-- >= i)
	{
		if (*s1 == *s2)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
