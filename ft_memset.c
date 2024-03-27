/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:15:34 by evrivera          #+#    #+#             */
/*   Updated: 2024/03/18 12:18:09 by evrivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
segun entiendo es una funcion que pide que llene x variables con x valor 
o en mejores palabras tenemos una bolsa = memoria en donde queremos guardar una serie de bolitas de un color en concreto
 *
 esto es un intento pero esta mal 
#include <stdio.h>
#include <unistd.h>

char ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = b;
    len = 0;
    c=0;
    while(c < len )
    {
        *ptr++ = unsigned char value;
        c++;
    }
    return (unsigned char c);
}

int main()
{
    char cadenita[]="garden";
    //int relleno = 0;
    
    ft_memset(cadenita[relleno]);
    //int = (int *)pv;
    write(1,&cadenita,1);

    return (0);
}
/*void punteros
el casting en c para memset
*/
  */
