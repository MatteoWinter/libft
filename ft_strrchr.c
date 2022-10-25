/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:47:44 by matwinte          #+#    #+#             */
/*   Updated: 2022/10/26 01:04:40 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long int	i;

	i = ft_strlen(s);
	while (i > -1 && s[i] != (char) c)
		i--;
	if (s[i] == (char) c)
		return ((char *) &s[i]);
	return (NULL);
}
