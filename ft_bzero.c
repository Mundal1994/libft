/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:17:28 by molesen           #+#    #+#             */
/*   Updated: 2021/11/03 09:14:04 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	erases data for n amount of memory by writing zeros	*/

void	ft_bzero(void *dst, size_t n)
{
	unsigned char	*pnt;
	size_t			i;

	pnt = dst;
	i = 0;
	while (i < n)
	{
		pnt[i] = '\0';
		i++;
	}
}
