#include <stdio.h>
#include <stdlib.h>
#include "scanner.h"

int main(int argc, const char *argv[])
{
    enum TOKEN token;
    do
    {
        token = get_token();
        //printf("ayuda %i \n", token);
    } while (token != FDT);
}

// maingw -g -Wall -std=c17 -p -pedantic-errors main.c scanner.c -o tp.exe