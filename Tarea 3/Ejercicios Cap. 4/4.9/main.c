#include <stdio.h>
#include <stdlib.h>

// Paso de una funcion como parametro por referencia.

int suma(int X, int Y)
// La funcion suma regresa la suma de los parametros de tipo entero x y y.
{
    return (X + Y);
}

int resta(int X, int Y)
// Esta funcion regresa la resta de los parametros de tipo entero X y Y.
{
    return (X - Y);
}

int control(int (*apf) (int, int), int X, int Y)
// Esta función recibe como parámetro otra función —la dirección— y dependiendo de cuál sea ésta, llama a la función Suma o Resta.
{
int RES;
RES = (*apf) (X, Y); // Se llama a la función Suma o Resta.
return (RES);
}
void main(void)
{
    int R1, R2;
    R1 = control(suma, 15, 5); // Se pasa como parámetro la funcion Suma.
    R2 = control(resta, 10, 4); // Se pasa como parámetro la funcion Resta.
    printf("\n Resultado 1: %d", R1);
    printf("\n Resultado 2: %d", R2);
    }


