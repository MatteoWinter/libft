/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 20:47:54 by matwinte          #+#    #+#             */
/*   Updated: 2022/10/01 13:28:07 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

#if DEBUG
int main(void)
{
	int i = -1;
	while (i < 530)
	{
		printf("ft: %i %c = %i\n", i, i, ft_isalpha(i));
		printf("or: %i %c = %i\n", i, i, isalpha(i));
		i++;
	}
	return (0);
}
#endif
