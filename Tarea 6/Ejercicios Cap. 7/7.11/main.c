#include <stdio.h>
#include <ctype.h>

// Veridfica

void main(void)
{
    char p, cad[50];
    int n;
    printf("Ingrese la cadena de caracteres (maximo 60): ");
    gets(cad);
    printf ("Ingrese la posicion en la cadena que desea verificar ");
    scanf("%d, &n");
    if ((n >= 0) && (n <50))
    {
        p + cad[n - 1];
        if (islower (p))
            printf("\n %c es una letra minuscucla", p);
            else
            printf("\n %c es una letra mayuscula", p);
    }
    else
        printf("\n El valor de n es incorecto", p);
    }
