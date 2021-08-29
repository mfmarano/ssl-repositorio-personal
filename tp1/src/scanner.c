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
        buffer[0] = c;
        return SEPARADOR;
    }
    else if (c == FDT) // si llego al final
    {
        return FDT;
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
        buffer[i++] = '\0';
        return CADENA;
    }
}