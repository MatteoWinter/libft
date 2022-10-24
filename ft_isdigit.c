/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:57:39 by matwinte          #+#    #+#             */
/*   Updated: 2022/10/01 13:27:52 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

#if DEBUG
int main(void)
{
	int i = -1;
	while (i < 530)
	{
		printf("ft: %i %c = %i\n", i, i, ft_isdigit(i));
		printf("or: %i %c = %i\n", i, i, isdigit(i));
		i++;
	}
	return (0);
}
#endif
