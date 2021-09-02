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
        buffer[1] = '\0';
        return SEPARADOR;
    }
    else if (c == FDT) // si llego al final de texto
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
        buffer[i] = '\0';
        return CADENA;
    }
}