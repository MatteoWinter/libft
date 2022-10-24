/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:17:28 by matwinte          #+#    #+#             */
/*   Updated: 2022/10/01 23:22:47 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 32);
	return (c);
}

#if DEBUG
int main(void)
{
	int i = -1;
	while (i < 250)
	{
		printf("ft: %i %c = %c\n", i, i, ft_toupper(i));
		printf("or: %i %c = %c\n", i, i, toupper(i));
		i++;
	}
	return (0);
}
#endif
