#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"

int main(int argc, const char *argv[])
{
    enum TOKEN token;
    do
    {
        token = get_token();
        switch (token)
        {
        case SEPARADOR:
            printf("Separador: %c \n", buffer[0]);
            break;
        case CADENA:
            printf("Cadena: %s \n", buffer);
            buffer[0] = '\0';
            break;
        default:
            printf("Fin de texto \n");
            break;
        }
    } while (token != FDT);
}