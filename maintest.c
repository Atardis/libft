/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gahubaul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 15:45:08 by gahubaul          #+#    #+#             */
/*   Updated: 2015/12/02 15:47:08 by gahubaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	main()
{
	printf("%s", "le Bon   -> ");
	printf("%s", strnstr("salut", "salut", 6));
	printf("%c", '\n');
	printf("%s", "le Mien  -> ");
	printf("%s", ft_strnstr("salut", "salut", 6));
	printf("%c", '\n');
}
