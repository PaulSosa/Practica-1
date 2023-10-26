#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cuentap (char *);

void main (void)
{
    int i;
    char fra[50];
    printf ("Ingrese la linea de texyto ");
    gets(fra);
    strcat (fra, "");

    i = cuentap(fra);
    printf("\n la lineta tiene %d palabras", i);
}

int cuentap(char *cad)
{
    char *cad0 = "";
    int i = 0;
    cad0 = strstr(cad, "");

    while (strcmp(cad, cad0))
    {
        strcpy (cad, cad0);
        i++;
        cad0 = strstr (cad + 1, "");
    }
    return(i);
}
