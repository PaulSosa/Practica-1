#include <stdio.h>
#include <stdlib.h>

// Funciones para el manejo de cadenas de caracteres de la biblioteca stdio.h

void main(void)
{
    char *cad0 = "Buenos dias";

    char cad1[20] = "Hola";

    char cad2[] = "Mexico";

    char cad3[] = {'B', 'i', 'e', 'n', 'v', 'e', 'n', 'i', 'd', 'o', '\0'};

    char cad4[20], cad5[20], cad6[20];

    printf(";la cadena ca0 es: ");
    puts(cad0);

    printf(" la cadena cad1 es: ");
    printf("%s", cad1);
    printf ("La cadena cad2 es: ");
    puts (cad2);
    printf ("La cadena cad3 es: ");
    puts (cad3);

    printf(" ingrese una liena de texto - se lle con gets-: \n");
    gets(cad4);
    printf("La cadena cad4 es: ");
    puts(cad4);
    fflush(stdin);

    printf("Ingrese una linea de texto -se lee con scanf-: \n");
    scanf("%s", cad5);
    printf("La cadena cad5 es: ");
    printf("%s", cad5);
    fflush(stdin);

    char p;
    int i = 0;

    while ((p = getchar()) != '\n')
        cad6[i++] = p;
    cad6[i] = '\0';
    printf("la cadena cad6 es: ");
    puts(cad6);


}
