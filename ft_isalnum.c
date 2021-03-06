/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:28:08 by molesen           #+#    #+#             */
/*   Updated: 2021/11/17 14:42:40 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	checks if char is an alphanumeric character	*/

int	ft_isalnum(int ch)
{
	if (ft_isdigit(ch) == 1 || ft_isalpha(ch) == 1)
		return (1);
	return (0);
}
