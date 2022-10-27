/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:10:14 by matwinte          #+#    #+#             */
/*   Updated: 2022/10/27 22:46:37 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	w;
	char	**p;

	// edge cases
	if (s == NULL || c == '\0' || *s == '\0')
	{
		p = malloc(sizeof(char **));
		p[0] = NULL;
		return (p);
	}

	// count words
	i = 0;
	j = 0;
	w = 0;
	while (s[i++])
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		while (s[i] != c && s[i] != '\0')
			i++;
		w++;
	}

	p = malloc(sizeof(char *) * (w + 1));
	if (p == NULL)
		return (NULL);
	i = 0;

	// fill array
	while (w--)
	{
		while (*s == c)
			s++;
		while (s[i] != c && s[i] != '\0')
			i++;
		p[j++] = ft_substr(s, 0, i);
		s += i;
		i = 0;
	}
	p[j] = NULL;
	return (p);
}

#if 0
#include <stdio.h>

int main(void)
{
	int i = 0;
	char **strs = ft_split("      split       this for   me  !       ", ' ');

	while (strs[i])
		printf("ret: \"%s\"\n", strs[i++]);
	if (strs[i] == NULL)
		printf("ret: NULL\n");
	return (0);
}
#endif
