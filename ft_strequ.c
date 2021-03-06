/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:31:51 by molesen           #+#    #+#             */
/*   Updated: 2021/11/19 13:20:44 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	lexicographical comparison between s1 and s2
**	if the strings are identical the function return 1, or 0 otherwise
*/

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
		if (ft_strcmp(s1, s2) != 0)
			return (0);
	return (1);
}
