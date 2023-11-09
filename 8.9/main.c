#include <stdio.h>
#include <string.h>

// Bienes raices.

typedef struct
{
    char zona[20];
    char calle[20];
    char colo[20];
    } ubicacion;
    typedef struct
    {
        char clave[5];
        float scu;
        float ste;
        char car[50];
        ubicacion ubi;
        float precio;
        char dispo;
        } propiedades;
        void Lectura(propiedades , int);
        void F1(propiedades *, int); /* Prototipos de funciones. */
        void F2(propiedades *, int);
        void main(void)
        {
            propiedades PROPIE[100];
            int TAM;
            do
                {
                    printf("Ingrese el numero de propiedades: ");
            scanf("%d", &TAM);
            }
            while (TAM > 100 || TAM < 1);
            lectura(PROPIE, TAM);
            F1(PROPIE, TAM);
            F2(PROPIE, TAM);
            }
            void lectura(propiedades A[], int T)
            {
                int I;
                for (I = 0; I < T; I++)
                    {
                        printf(" \n \t Ingrese datos de propiedad %d", I + 1);
                        printf(" \n Clave: ");
                        fflush(stdin);
                        gets(A[I].clave);
                        printf("Superficie cubierta: ");
                        scanf("%f", &A[I].scu);
                        printf("Superficie terreno: ");
                        scanf("%f", &A[I].ste);
                        printf("Caracteristicas: ");
                        fflush(stdin);
                        gets(A[I].car);
                        printf(" \t Zona: ");
                        fflush(stdin);
                        gets(A[I].ubi.zona);
                        printf(" \t Calle: ");
                        fflush(stdin);
                        gets(A[I].ubi.calle);
                        printf(" \t Colonia: ");
                        fflush(stdin);
                        gets(A[I].ubi.colo);
                        printf("Precio: ");
                        scanf("%f", &A[I].precio);
                        printf("Disponibilidad (Venta-V Renta-R): ");
                        scanf("%c", &A[I].dispo);
                        }
                        }
                        void F1(propiedades A[], int T)
                        {
                            int I;
                            printf(" \n \t \t Listado de Propiedades para Venta en Miraflores");
                            for (I = 0; I < T; I++)
                                if ((A[I].dispo == 'V') && (strcmp (A[I].ubi.zona, "Miraflores") == 0))
                                if ((A[I].precio >= 450000) && (A[I].precio <= 650000))
                                {
                                    printf(" \n Clave de la propiedad: ");
                            puts(A[I].clave);
                            printf(" \n Superficie cubierta: %f", A[I].scu);
                            printf(" \n Superficie terreno: %f", A[I].ste);
                            printf(" \n Caracteristicas: ");
                            puts(A[I].car);
                            printf("Calle: ");
                            puts(A[I].ubi.calle);
                            printf("Colonia: ");
                            puts(A[I].ubi.colo);
                            printf("Precio: %.2f \n ", A[I].precio);
                            }
                            }
                            void F2(propiedades A[], int T)
                            {
                                int I;
                                float li, ls;
                                char zon[20];
                                printf(" \n \t \t Listado de Propiedades Renta");
                                printf(" \n Ingrese zona geografica: ");
                                fflush(stdin);
                                gets(zon);
                                printf("Ingrese limte inferior de precio:");
                                scanf("%f", &li);
                                printf("Ingrese limite superior del precio:");
                                scanf("%f", &ls);
                                for (I = 0; I < T; I++)
                                    if ((A[I].dispo == 'R') && (strcmp (A[I].ubi.zona, zon) == 0))
                                    if ((A[I].precio >= li) && (A[I].precio <= ls))
                                    {
                                        printf("\n Clave de la propiedad: ");
                                puts(A[I].clave);
                                printf(" \n Superficie cubierta: %d", A[I].scu);
                                printf(" \n Superficie terreno: %d", A[I].ste);
                                printf(" \n Caracteristicas: ");
                                puts(A[I].car);
                                printf("Calle: ");
                                puts(A[I].ubi.calle);
                                printf("Colonia: ");
                                puts(A[I].ubi.colo);
                                printf("Precio: %.2f", A[I].precio);
                                }
}
