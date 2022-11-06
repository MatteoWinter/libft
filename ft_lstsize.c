/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matwinte <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 23:59:55 by matwinte          #+#    #+#             */
/*   Updated: 2022/11/07 00:07:05 by matwinte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*l;

	i = 0;
	l = lst;
	if (l)
		i++;
	while (l->next)
	{
		l = l->next;
		i++;
	}
	return (i);
}
