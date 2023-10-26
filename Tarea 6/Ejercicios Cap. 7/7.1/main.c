#include <stdio.h>
#include <stdlib.h>

// Funciones para el manejo de caracteres de la biblioteca stdio.h

void main(void)
{
    char p1, p2, p3 = '$';
    printf ("Ingrese un caracter: ");
    p1 = getchar(); //Se utiliza la funcion getchar para leer un caracter.
    putchar(p1);  //Se utiliza la funcion putchar para escribir un caracter.

    printf("\n");
    fflush(stdin);
    printf("\n El caracter p3 es: ");
    putchar ("\n");
    printf("\n Ingrese otro caracter: ");
    fflush (stdin);
    scanf("%c", p2);
}
