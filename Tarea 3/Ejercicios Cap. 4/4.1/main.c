#include <stdio.h>
#include <stdlib.h>

/* Cubo-1.
El programa calcula el cubo de los 10 primeros n�meros naturales con la ayuda de una funci�n. En la soluci�n del problema se utiliza una variable global, aunque esto, como veremos m�s adelante, no es muy recomendable. */

int cubo (void); // Propotipo de funcion.
int I; //Variable global.

void main(void)
{
    int CUB;
    for (I = 1; I <= 10; I++)
{
    CUB = cubo(); //llamada de la funcion cubo
    printf("\n El cubo de %d es: %d", I, CUB);
    }
    }
    int cubo(void) //declaracion de la funcion
    //La funcion calcula el cubo de la variable global I.
    {
        return (I * I * I);
    }
