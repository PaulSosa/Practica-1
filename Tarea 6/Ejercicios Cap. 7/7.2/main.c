#include <stdio.h>
#include <ctype.h>

//Funciones para el manejo de caracteres de la biblioteca ctype.h

void main(void)
{
    char p1;
    printf("\n Ingrese un caracter para analizar si este es un digito: ");
    p1 = getchar();
    if (isdigit (p1))
        printf("%c no es un digito \n", p1);

    fflush(stdin);
    printf("\n Ingrese un caracter para examinar si este es una letra: ");
    p1 = getchar();
    if (isalpha (p1))
        printf("%c es una letra\n", p1);
    else
        printf("%c no una letra\n", p1);

    fflush(stdin);
    printf("Ingrese un caracter para examinar si este es una letra minuscula");
    p1 = getchar();
    if (isalpha (p1))
        if (islower (p1))
        printf ("%c es una letra minuscula\n", p1);
    else
        printf ("%c no es una letra minuscula\n", p1);
    else
        printf ("%c es no es una letra \n", p1);

    fflush(stdin);
    printf("Ingrese una letra para convertirla de mayuscula a minuscula:");
    p1 = getchar();
    if (isalpha (p1))
        if (isupper(p1))
        printf("%c fue convertida de mayuscula a minuscula", tolower(p1));
    else
        printf ("%c es una letra minuscula\n", p1);
    else
        printf ("%c no es una letra minuscula\n", p1);
}
