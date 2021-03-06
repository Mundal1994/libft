/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: molesen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 13:29:12 by molesen           #+#    #+#             */
/*   Updated: 2021/12/20 13:39:58 by molesen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "./libft.h"
# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>
# include <string.h>
# include <assert.h>
# include <limits.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>

# define FPATH ".test"
# define RESET	"\033[0m"
# define BOLD	"\033[1m"
# define RED		"\033[31m"
# define GREEN	"\033[32m"
# define MAGENTA	"\033[35m"
# define UNCOLOR	"\033[39m"

char	rand_char(void);
char	*rand_str(char *str, size_t len);
void	rand_substrs(char *str1, char *str2, size_t len_pre, size_t len_post);
size_t	randi(size_t max);
void	print_mem(void *ptr, size_t size);
void	print_mem_val(void *ptr, size_t size);
int		signtest(int i1, int i2);
void	print_separator(void);

#endif
