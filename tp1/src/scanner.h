#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

enum TOKEN {
    FDT = EOF, // para cuando se termina el archivo (o sea, se leyó EOF)
    SEPARADOR = ',', // solo la coma (',') pertenece a esta categoría
    CADENA  // sucesión de caracteres que no sea ninguno de los tokens anteriores ni espacio o tabulador
    };

char buffer[128];

int get_token();

#endif // SCANNER_H_INCLUDED
