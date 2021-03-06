/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:55:42 by molesen           #+#    #+#             */
/*   Updated: 2021/11/26 17:32:58 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	frees all elements of a 2d array	*/

char	**ft_free2d(char **dest)
{
	size_t	i;

	i = 0;
	while (dest[i] != 0)
	{
		ft_strdel(&dest[i]);
		i++;
	}
	free(dest);
	return (NULL);
}
