#include <stdio.h>
#include <stdlib.h>

/*promedio Curso.
El programa, al recibir como dato el promedio de un alumno en un curso
universitario, escribe aprobado si su promedio es mayor o igual a 6.
PRO: variable de tipo real. */

void main (void)
{
float pro;
printf("Ingrese el promedio del alumno: ");
scanf("%f", &pro);
if (pro >= 6)
    printf("\n Aprobado");
}
else
{
    printf("\nReprobado");
}
