/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 15:15:47 by fcoelho           #+#    #+#             */
/*   Updated: 2020/08/07 22:57:55 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

char			*ft_strdup(const char *src);
char			*ft_strnew(size_t size);
int				ft_isdigit(int c);
int				ft_putchar(const char c);
int				ft_tolower(int c);
char			*ft_str_lowcase(char *str);
int				ft_putlstr(char *str, int len);
size_t			ft_strlen(const char *s);
char			*ft_itoa_base(size_t nbr, int base);
char			*ft_itoa(int n);
char			*ft_itoa_u(unsigned int num);
void			ft_putstr(const char *s);
int				ft_isspace(int c);

#endif
