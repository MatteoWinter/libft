/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:10:17 by matwinte          #+#    #+#             */
/*   Updated: 2022/10/27 16:06:44 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_getnextsep(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

size_t ft_getnextchar(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		i += ft_getnextsep(&s[i], c);
		if (s[i] == c)
			i+= ft_getnextchar(&s[i], c);
		w++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	w;
	size_t	start;
	size_t	len;
	char	**p;

	i = 0;
	w = 0;
	start = 0;
	if (s == NULL)
		return (NULL);
	w = ft_wordcount(s, c);
	if (w == 0)
		return (NULL);
	p = malloc(sizeof(char *) * w + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (w-- && s[start])
	{
		start += ft_getnextchar(&s[start], c);
		if (s[start] == '\0')
			break ;
		len = ft_getnextsep(&s[start], c);
		p[i++] = ft_substr(s, start, len);
		start += len;
	}
	p[i] = NULL;
	return (p);
}

/*
#include <stdio.h>

int main(void)
{
	int i = 0;
	char **strs = ft_split("_,f,,a,1aaa,2aaa,3aaaa,a aasd,a4,5,6,,,,,ff", ',');

	while (strs[i])
		printf("ret: \"%s\"\n", strs[i++]);
	return (0);
}
*/
