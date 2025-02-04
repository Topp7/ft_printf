/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:17:55 by stopp             #+#    #+#             */
/*   Updated: 2023/11/02 16:25:06 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"

int		print_pointer(void *arg);
int		print_char(char c);
int		print_str(char *str);
int		print_nbr(int nbr);
int		print_unsigned_nbr(unsigned int nbr);
char	*create_hexstr(unsigned long arg);
int		print_hex(unsigned int arg, int up);
int		ft_printf(const char *format, ...);

#endif
