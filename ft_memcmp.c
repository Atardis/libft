/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:56:15 by gahubaul          #+#    #+#             */
/*   Updated: 2015/11/30 16:56:16 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	counter;

	if (!(str1 = (char *)s1) ||
		!(str2 = (char *)s2))
		return (0);
	if (n == 0)
		return (0);
	counter = 0;
	while ((str1[counter] == str2[counter]) && (counter + 1 < n))
		counter++;
	return ((str1[counter] - str2[counter]));
}
