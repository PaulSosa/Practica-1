#include <stdio.h>
#include <stdlib.h>

// Cuenta Caracteres.

int cuenta(char); /* Prototipo de funci�n. */
void main(void)
{
    int res;
    char car;
    printf(" \n Ingrese el caracter que se va a buscar en el archivo: ");
    car = getchar();
    res = cuenta(car);
    if (res != -1)
        printf(" \n \n El caracter %c se encuentra en el archivo %d veces", car, res);
    else
        printf(" No se pudo abrir el archivo");
    }
    int cuenta(char car)
    {
        int res, con = 0;
        char p;
        FILE *ar;
        if ((ar = fopen ("arc.txt", "r")) != NULL)
            {
                while (!feof(ar))
                {
                    p = getc(ar);
        if (p == car)
            con++;
        }
        fclose(ar);
        res = con;
        }
        else
            res = -1;
        return (res);
        }
