/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:30:44 by molesen           #+#    #+#             */
/*   Updated: 2021/11/02 09:30:46 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	prints char to standard output, standard input or standard error
**	depending on fd given	
*/

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
