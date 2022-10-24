/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:23:20 by matwinte          #+#    #+#             */
/*   Updated: 2022/10/01 23:24:23 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}

#if DEBUG
int main(void)
{
	int i = -1;
	while (i < 250)
	{
		printf("ft: %i %c = %c\n", i, i, ft_tolower(i));
		printf("or: %i %c = %c\n", i, i, tolower(i));
		i++;
	}
	return (0);
}
#endif
