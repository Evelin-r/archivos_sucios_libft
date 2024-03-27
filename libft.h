/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:37:40 by evrivera          #+#    #+#             */
/*   Updated: 2024/03/20 16:56:40 by evrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//esto se llama proteccion de encabezado ->  ayuda a que la primera vez que compilemos compile normal pero si hacemos un pequeño cambio y queremos volver a compilar nos ahorre tiempo compilndo solo los que hemos modificado //son directivas de compilacion condicional
#ifndef _LIBFT_H_//si no esta definido la libreria -> libft.h
#define _LIBFT_H_ //definela

#include <unistd.h> //las librerias a incluir

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(char *s);
void	*ft_memset(void *b, int value, size_t n);
void *ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t m);
size_t ft_strlcpy(char *restrict dst, const char *restrict src, size_t n);
//size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t n);
char	ft_toupper(char c);
char	ft_tolower(char c);

#endif
