#include <stdio.h>
#include <stdlib.h>

//Suma y promedio.

void main(void)
{
    char c, cad [10];
    int i = 0;
    float sum = 0.0;
    printf("Desea ingresar una cadena de caracteres (S/N)?");
    c = getchar();
    while (c == 'S')
    {
        printf("Ingrese la cadena de caracteres: ");
        fflush(stdin);
        gets(cad);
        i++, sum += atof(cad);
        printf("Desea ingresar otra cadena de caracterenes (S/N)");
        c = getchar();
    }
    printf("\n Suma: %.2f", sum);
    printf("\n Promedio: %.2f", sum / i);
}
