#include <stdio.h>
#include <stdlib.h>

// Declaracion de cadenas de caracteres y asignacion de valores

void main(void)
{
    char *cad0;
    cad0 = "Argentina";
    puts (cad0);

    cad0 = "Brasil";

    char *cad1 = "";
    gets(cad1);

    char cad2[20] = "Mexico";
    puts (cad2);
    gets (cad2);

    cad2[10] = "Guatemala";

}
