#include <stdio.h>
#include <stdlib.h>

// Eleccion
// El programa almacena los votos emitidos en una elecci�n en la que hubo cinco candidatos e imprime el total de votos que obtuvo cada uno de ellos.

void main(void)
{
    int ELE[5] = {0}; //Declaracion del arreglo entero ELE de cinco elementos. Todos sus elementos se inicializan en 0.
    int I, VOT;
    printf("Ingresa el primer voto(0 - para terminar): ");
    scanf("%d", &VOT);
    while (VOT)
    {
        if ((VOT > 0) && (VOT <6)) //Se verifica que el voto sea correcto.
            ELE [VOT-1]++; // Los votos se almacenan en el arreglo. Recuerda que la primera posici�n del arreglo es 0, por esa raz�n a la
                           // variable VOT se le descuenta 1. Los votos del primer candidato se
                           // almacenan en la posici�n 0.
                           else
                                printf("\n El voto ingresado es incorrecto. \n");
                           printf("Infrese el siguiente voto (0 - Para terminar): ");
                           scanf("%d", &VOT);
    }
    printf("\n Resultados de la Eleccion\n");
    for (I = 0; I <= 4; I++)
        printf("\n Candidato %d: %d", I+1, ELE[1]);
}
