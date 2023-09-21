#include <stdio.h>
#include <stdlib.h>

/*Promedio curso.
El programa, al recibir como dato el promedio de un alumno en un curso universitario, escribe aprobado si su promedio es mayor o igual a 6, o reprobado en caso contrario.
PRO: variable de tipo real. */

void main(void)
{
    float pro;
    printf("Ingrese el promedio del alumno:");
    scanf("%f", &pro);
    if (pro >= 6.0)
        printf("\n Aprobado");
    else
        printf("\n Reprobado");
}
