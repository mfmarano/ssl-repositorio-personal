#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "scanner.h"

int get_token()
{
    char c;
    while (isspace(c = getchar()))
    {
    }; // saltea espacios en blanco

    if (c == SEPARADOR) // si es una coma
    {
        printf("Separador: %c \n", c);
        return SEPARADOR;
    }
    else // si es un caracter
    {
        int i = 0;
        do
        {
            buffer[i] = c;
            i++;
            c = getchar();
        } while (c != SEPARADOR && !isspace(c));
        ungetc(c, stdin);
        printf("Cadena: %s \n", buffer);
        buffer[0] = '\0';
        return CADENA;
    }

    printf("Fin de texto\n");
    return FDT;
}