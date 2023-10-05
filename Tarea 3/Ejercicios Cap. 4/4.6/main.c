#include <stdio.h>
#include <stdlib.h>

//Prueba de parametros por referencia.

void f1 (int *); // Prototipo de función. El parámetro es de tipo entero y por referencia. Observa el uso del operador de indireccion.

void main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n Valor de K antes de llamar a la funcion: %d", ++K);
        printf("\n Valor de K despues de llamar a la funcion: %d", f1(&K)); //Llamada a la funcion f1. Se pasa la direccion de la variable K, por medio del operador de direccion: &.
    }
}

void f1 (int *R) //La función f1 recibe un parámetro por referencia. Cada vez que el parámetro se utiliza en la función debe ir precedido por el operador de indirección.
{
    *R += +R;
}
