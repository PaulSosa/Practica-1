#include <stdio.h>
#include <stdlib.h>

// Cadena invertida resuelta en forma recursiva.

void inverso(char *);

void main(void)
{
    char fra[50];
    printf("\n Ingrese linea texto ");
    gets(fra);
    printf("\n Escriba linea texto en forma inversa ");
    inverso(fra);
}

void inverso(char *cadena)
{
    if (cadena [0] != '\0')
    {
        inverso(&cadena[1]);
        putchar(cadena[0]);
    }
}
