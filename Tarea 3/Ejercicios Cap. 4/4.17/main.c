#include <stdio.h>
#include <stdlib.h>

// Lluvias.
// El programa permite calcular el promedio mensual de las lluvias ca�das en tres regiones importantes del pa�s. Determina tambi�n cu�l es la regi�n con mayor promedio de lluvia anual. */
void Mayor(float, float, float); // Prototipo de funci�n.
void main(void)
{
    int I;
    float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;
    for (I =1; I <= 12; I++)
        {
            printf("\n Ingresa las lluvias del mes %d", I);
            printf("\n Regiones Golfo, Pacifico y Caribe: ");
            scanf("%f %f %f", &GOL, &PAC, &CAR);
            AGOL += GOL;
            APAC += PAC;
            ACAR += CAR;
            }
            printf("\n\n Promedio de lluvias Region Golfo: %6.2f", (AGOL / 12));
            printf("\n Promedio de lluvias Region Pacifico: %6.2f ", (APAC / 12));
            printf("\n Promedio de lluvias Regi�n Caribe: %6.2f \n", (ACAR / 12));
            Mayor(AGOL, APAC, ACAR);
// Se llama a la funci�n Mayor. Paso de par�metros por valor.
}
void Mayor(float R1, float R2, float R3)
// Esta funci�n obtiene la regi�n con mayor promedio de lluvia anual.
{
    if (R1 > R2)
        if (R1 > R3)
        printf("\n Region con mayor promedio: Region Golfo. Promedio: %6.2f", R1 / 12);
    else
        printf("\n Region con mayor promedio: Region Carobe. Promedio: %6.2f", R3 / 12);
    else
        if (R2 > R3)
        printf("\n Region con mayor promedio: Region Pacifico. Promedio: %6.2f", R2 / 12);
    else
        printf("\n Region con mayor promedio: Region Caribe. Promedio: %6.2f", R3 / 12);
    }
