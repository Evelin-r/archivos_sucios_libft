/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:16:52 by evrivera          #+#    #+#             */
/*   Updated: 2024/04/04 16:12:48 by evrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char *
     strnstr(const char *haystack, const char *needle, size_t len);

The strnstr() function locates the first occurrence of the null-termi-
     nated string needle in the string haystack, where not more than len char-
     acters are searched.  Characters that appear after a `\0' character are
     not searched.  Since the strnstr() function is a FreeBSD specific API, it
     should only be used when portability is not a concern. 

RETURN VALUES
     If needle is an empty string, haystack is returned; if needle occurs
     nowhere in haystack, NULL is returned; otherwise a pointer to the first
     character of the first occurrence of needle is returned.  

     devuelve un puntero tipo char con l coincidencia en adelante
     es decir que desde que encuentra una coincidencia te devuelve el resto
    de la cadena

el tema del tamaño enn esta funicon:
    Cuando usas strnstr con un tamaño máximo n, básicamente le estás diciendo:
    "Busca la subcadena dentro de los primeros n caracteres de la cadena 
    principal, pero si no la encuentras, busca en el resto de la cadena".

Entonces, si especificas un tamaño máximo n y la subcadena está dentro de esos 
primeros n caracteres, strnstr te dará la respuesta basada en esos primeros n 
caracteres. Pero si la subcadena no está dentro de esos primeros n caracteres, 
strnstr seguirá buscando hasta el final de la cadena principal.

En resumen, el tamaño máximo n limita dónde comienza la búsqueda, pero no la 
detiene si la subcadena no se encuentra dentro de esos primeros n caracteres.

Espero que esto te ayude a entender mejor. Si todavía tienes dudas, no dudes
en preguntar.
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{

}
/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
    size_t i;
    
    i=0;
    
    while (haystack[i] != '\0' && i < n)
    {
       if (haystack == needle)
       {
           return (haystack);
       }
       else if(haystack[i] != needle)
       {
         return (haystack);  
       }
       i++;
    }
    return (0);
}
int main()
{
    char cpajar[] = "cadena principal en donde se busca la subcadena";
    char caguja[] = "la";
    
    ft_strnstr(cpajar, caguja, 2);
    
    return(0);
}
*/
/*funcion de gepeto funciona segun la posicion en la que le digas que empiece a buscar
char *ft_strnstr(const char *haystack, const char *needle, size_t n) {
    size_t i = 0;

    while (haystack[i] != '\0' && i < n) {
        size_t j = 0;
        while (haystack[i + j] == needle[j] && needle[j] != '\0' && i + j < n) {
            j++;
        }
        if (needle[j] == '\0') {
            return (char *)&haystack[i]; // Se encuentra la subcadena
        }
        i++;
    }
    return NULL; // No se encuentra la subcadena
}
int main()
{
    const char cpajar[] = "cadena principal en donde se busca la subcadena";
    const char caguja[] = "la";
    
    printf("%s",ft_strnstr(cpajar, caguja, 10));
    
    return(0);
}
*/