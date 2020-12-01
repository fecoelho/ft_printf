/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 15:49:51 by fcoelho           #+#    #+#             */
/*   Updated: 2020/08/05 15:49:55 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include "libft/libft.h"

typedef struct	s_flags
{
	int			minus;
	int			zero;
	int			dot;
	int			star;
	int			type;
	int			width;
}				t_flags;

int				ft_printf(const char *format, ...);
int				ft_handler(int c, t_flags flags, va_list args);
int				ft_print_c(char c, t_flags flags);
int				ft_print_di(int c, t_flags flags);
int				ft_print_s(char *c, t_flags flags);
int				ft_print_p(size_t num, t_flags flags);
int				ft_print_u(unsigned int num, t_flags flags);
int				ft_print_x(unsigned int num, int lowcase, t_flags flags);
int				ft_print_percent(t_flags flags);
int				ft_print_width(int width, int minus, int zero);
int				ft_isconversion(int c);
int				ft_isflags(int c);
t_flags			ft_width_flags(va_list args, t_flags flags);
int				ft_dot_flags(const char *str, int start, va_list args,
					t_flags *flags);
t_flags			ft_minus_flags(t_flags flags);
t_flags			ft_isdigit_flags(char c, t_flags flags);

#endif
