#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Par, impar o nulo.

NUM: variable de tipo entero. */

void main(void)
{
    int NUM;
    printf("Ingrese el numero: ");
    scanf("%d", &NUM);
    if (NUM == 0)
    printf("\n Nulo");
    else
        if (pow (-1, NUM) > 0)
        printf("\n Par");
    else
        printf("\n Impar");
        }
