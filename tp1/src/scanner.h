#ifndef SCANNER_H_INCLUDED
#define SCANNER_H_INCLUDED

enum TOKEN
{
    FDT = EOF,
    SEPARADOR = ',',
    CADENA
};

char buffer[128];

int get_token();

#endif // SCANNER_H_INCLUDED
