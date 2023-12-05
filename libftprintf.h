/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:05:05 by aperrein          #+#    #+#             */
/*   Updated: 2023/02/20 11:15:33 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	print_c(int c);
int	print_s(char *s);
int	check_conv(char c, va_list ap, int *i, char p);
int	print_d(int n);
int	print_x(unsigned int n, char c);
int	print_p(unsigned long long n, int d);

#endif
