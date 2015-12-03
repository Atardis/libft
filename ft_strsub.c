/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:10:12 by gahubaul          #+#    #+#             */
/*   Updated: 2015/11/30 17:10:12 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	char			*str_new;
	unsigned int	counter;

	if (!(str_new = ft_strnew(len)) || !s)
		return (NULL);
	str = (char *)s;
	counter = 0;
	while (counter < len)
	{
		str_new[counter] = str[start];
		start++;
		counter++;
	}
	return (str_new);
}
