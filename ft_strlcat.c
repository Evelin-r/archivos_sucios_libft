/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:32:04 by evrivera          #+#    #+#             */
/*   Updated: 2024/03/27 12:48:20 by evrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**/
#include "libft.h"
/*
strlcat() agrega la cadena src al final de dst. Se agregará como máximo dstsize 
*/
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	j;
	char	juntas;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	if (dst[i] == '\0')
	{
		while (src[j] != '\0')
		{
			j++;
		}
		printf ("%ld\n", i);
		printf ("%ld\n", j);
		juntas = i +=  j;
		printf ("%d", juntas);
	}
	return (juntas);
}
/*
int main()
{
	char culto[2]= "mi";
	char pupilo[10] = "hola";
	unsigned int i;
	i = 8;

	//write(1, "\n" ,1);
	ft_strlcat(pupilo, culto, i);
	
	write(1, culto, 8);
	write(1,"\n",1);
	write(1, pupilo, 10);
	return (0);
}
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	j;
	char	juntas;

	i = 0;
	j = 0;
	while((char *)dst[i]  != '\0')
	{
		i++;
	}
	if((char *)dst[i]  == '\0')
	{
		while((char *)dst[j]  != '\0')
		{
			j++;
		}
		juntas = i + j;
	}
	return (juntas);
}
*/
/*
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	j;
	char	juntas;

	i = 0;
	j = 0;
	while(dst[i]  != '\0')
	{
		i++;
	}
	if(dst[i]  == '\0')
	{
		while(dst[j]  != '\0')
		{
			j++;
		}
			printf("%ld\n",i);
			printf("%ld\n",j);
		juntas = i + j;
		printf("%d",juntas);
	}
	return (juntas);
}
*/

/*
esta funcion cumple pero lo hace al reves copia destino sobre origen y no copia exactamente el numero de caracteres que queremos****

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;//contador
	size_t	j;//contador
	size_t	dst_len;//tamaño destino
	size_t	src_len;//tamaño origen

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < n)//destino no sea nulo y el indice sea menor al tamaño que el usuario quiera copiar
	{
		i++;
	}
	dst_len = i;//tamaño completo del string destino
	printf("%ld\n",dst_len);//
	while (src[j] != '\0' && i + j + 1 < n)// mientras origen no sea nulo y i+j+1(por el nulo) se menor a n 
	{
		dst[i + j] = src[j];//destino 4+1 es igual a origen j =1 2 3 ...
		j++;//itera
	}
	if (dst_len < n)// si el tamaño de destino es menor a el numero del usuario
		dst[i + j] = '\0';//le aagreegamos el nulo final 
	src_len = 0;//y le damos a el tamaño de origen el valor de 0
	while (src[src_len] != '\0')//mientras src no sea nulo
		src_len++;//iteramos
	if (dst_len > n)//comprobamso si el tamño de origen es menor a numero del usuario
		return (n + src_len);//si es menor retornamos el numero del usuario +el tamaño de origen 
	else
		return (dst_len + src_len);//si no que devuelva el taamaño de destino sumado al tamaño de origen
}
*/
/*
esta copia en dstino y en src es decir hace lo que quiero pero en ambas cadenas y aparte tampo tiene muy en importancia el n

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < n)
	{
		i++;
	}
	dst_len = i;
	
	while (src[j] != '\0' && i + j - 1 < n)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dst_len < n)
		dst[i + j] = '\0';
		
		//comprueba si destino abarca todo el n del usuario 
	if (dst_len > n)
		return (n + src_len);//si lo hace devuelve el tamaño +n
	else
		return (dst_len + src_len);//si no suma los tamaños de origen y destino -no se muy bien porque
}
*/
/*
es de esta persona me gusta muscho la manera simplificada en la que la hace
esta funcion esta perfecta y hace uso de otras funciones ya creadas como strlen y strlcpy
size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
size_t	d_len;
size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	dst += d_len;
	if (n > d_len)
		ft_strlcpy(dst, src, n - d_len);
	if (n < d_len)
		return (s_len + n);
	return (d_len + s_len);
}
*/

/*
una funcion que parte de mi idea pequeña  me ayudo gepeto
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t n)
{
    size_t i;
    size_t j;

    // Busca el final de dst
    i = 0;
    while (dst[i] != '\0' && i < n)
        i++;

    // Calcula la longitud de dst hasta n
    size_t dst_len = i;

    // Calcula cuántos caracteres hay espacio para copiar
    size_t available_space = n - dst_len - 1;

    // Si hay espacio para copiar, concatena src a dst
    if (available_space > 0)
    {
        j = 0;
        while (src[j] != '\0' && j < available_space)
        {
            dst[i + j] = src[j];
            j++;
        }
        dst[i + j] = '\0'; // Agrega el terminador nulo
    }

    // Calcula la longitud total de la cadena resultante
    size_t src_len = 0;
    while (src[src_len] != '\0')
        src_len++;

    size_t total_len = dst_len + src_len;

    // Si n es mayor que la longitud de dst, devuelve la longitud total
    if (n > dst_len)
        return total_len;
    // Si n es menor o igual que la longitud de dst, devuelve n - 1
    else
        return n - 1;
}
*/