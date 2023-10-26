#include <stdio.h>
#include <ctype.h>

//Cuenta de letras minusculas y mayusculas.

void main(void)
{
    char cad[50];
    int i = 0, mi = 0, ma = 0;

    printf("\n Ingrese la cadena de caracter4es (maximo 50 caracteres) ");
    gets(cad);
    while (cad[i] != '\0')
    {
        if (islower (cad[i]))
            mi++;
        else if (isupper (cad[i]))
            ma++;
        i++;
    }
    printf("\n letras minusculas: %d", mi);
    printf("\n letras mayusculas: %d", ma);
}
