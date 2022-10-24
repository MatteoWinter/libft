/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:22:23 by matwinte          #+#    #+#             */
/*   Updated: 2022/10/10 15:33:46 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char	*d;

	d = (char *) s;
	while (n--)
	{
		d[n] = c;
	}
	return (s);
}

#if DEBUG
int main(void)
{
	size_t n = 5;
	void *s = malloc(sizeof(char) * n);
	i = 0;
	while (i < n)
	{
		printf("%c", (char)s[i]);
		i++;
	}
	free(s);
	return (0);
}
#endif
