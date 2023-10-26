#include <stdio.h>
#include <stdlib.h>

// Calcula longitud en forma recursiva.

int cuenta(char *);

void main(void)
{
    int i;
    char cad[50];
    printf(" ingrese la cadena de caracteres: ");
    gets(cad);
    i = cuenta(cad);
    printf("\n Longitud d ela candena: %d", i);
}

int cuenta(char *cadena)
{
    if (cadena[0] == '\0')
        return 0;
    else
        return (1 + cuenta (&cadena[1]));
}
