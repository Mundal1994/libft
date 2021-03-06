/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:31:01 by molesen           #+#    #+#             */
/*   Updated: 2021/11/16 12:47:30 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	applies function f to each character of the string passed as argument
**	and passing its index as first argument
**	each character is passed by address to f to be modified if necessary
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(i, &s[i]);
			i++;
		}
	}
}
