/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 18:32:32 by evrivera          #+#    #+#             */
/*   Updated: 2024/03/20 16:53:02 by evrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
#include <stddef.h>

//funcion que copia cadenasa -> esta funcion funciona pero a paco no le gusta en dos test que falla 
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n -1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}

///otra forma de hacerlo que no valio
size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;

	i = 0;

	while (i < n-1 && src[i] != '\0')
	//compruebo que el indice sea menor al tamaño de la cadena principal pero -1 para que haya espacio para el nulo
//y que solo copie antes del nulo
	{
		dst[i] = src[i];//copiamos el src en destino
		i++;
	}
		dst = '\0';//le damos el nulo final 

	while(src[i] != '\0')//contamos los caracteres antes del nulo
	{
		i++;
	}
	return(i);//porque mi funcion principalmente devuelve el tamaño de la cadena copiada
}
/*
int main(void)
{
	char culto[]= "holitas";
	char principal[] = "hola";
	unsigned int i;
	i=8;

	//write(1, "\n" ,1);
	ft_strncpy(culto, principal, i);
	
	write(1, src, 8);
	write(1,"\n",1);
	write(1, dest, 15);
	return (0);
}*/
