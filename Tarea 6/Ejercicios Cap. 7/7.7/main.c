#include <stdio.h>
#include <string.h>

// Otras funciones de la biblioteca string.h para el manejod de cadenas.

void main(void)
{
    int i;
    char cad0[20] = "Hola Mexico";
    char cad1[20] = "Hola Guatemala";
    char cad2[20] = "Hola Venezuela";
    char cad3[20] = "Hola Mexico";
    char *c, c3;

    i =  strcmp (cad0, cad1);
    printf("\n Resultado de la comparacion -cad0 y cad1-: %d", i);

    i =  strcmp (cad0, cad2);
    printf("\n Resultado de la comparacion -cad0 y cad2-: %d", i);

    i =  strcmp (cad0, cad3);
    printf("\n Resultado de la comparacion -cad0 y cad3-: %d", i);

    i =  strlen (cad0);
    printf("\n Longitud cadena cad0: %d", i);

    i =  strlen (cad1);
    printf("\n Longitud cadena cad1: %d", i);

    c = strchr (cad1, 'G');

    if (c != NULL)
    {
        c3 = *c;
        printf("\n El valor de c3 es: %c", c3);
    }

    c = strchr (cad2, 'V');
    if (c != NULL)
    {
        c3 = *c;
        printf("\n El valor de c3 es: %c", c3);

    }


}
