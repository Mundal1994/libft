/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:14:11 by molesen           #+#    #+#             */
/*   Updated: 2021/11/02 10:30:00 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	fill memory with char c for n amount of bytes	*/

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*pnt;

	pnt = str;
	while (n--)
	{
		*pnt = c;
		pnt++;
	}
	return (str);
}
