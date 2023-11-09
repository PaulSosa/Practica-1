#include <stdio.h>
#include <string.h>

//Comercializadora Farmaceutica

typedef struct
{
    int clave;
    char nombre[15];
    float precio;
    int existencia;
    } producto;
    void Lectura(producto *, int);
    void Ventas(producto *, int);
    void Reabastecimiento(producto *, int);
    void Nuevos_Productos(producto *, int *);
    void Inventario(producto *, int);
    void main(void)
    {
        producto INV[100];
        int TAM, OPE;
        do
            {
                printf("Ingrese numero de productos: ");
        scanf("%d", &TAM);
        }
        while (TAM > 100 || TAM < 1);
        Lectura(INV, TAM);
        printf("\n Ingrese operacion a realizar. \n \t \t1 – Ventas \n \t \t2 – Reabastecimiento \n \t \t3 - Nuevos Productos \n \t \t4 – Inventario \n \t \t0 - Salir: ");
        scanf("%d", &OPE);
        while (OPE)
            {
                switch (OPE)
                {
                    case 1: Ventas(INV, TAM);
        break;
        case 2: Reabastecimiento(INV, TAM);
        break;
        case 3: Nuevos_Productos(INV, &TAM);
        break;
        case 4: Inventario(INV, TAM);
        break;
        };
        printf(" \n Ingrese operacion a realizar. \n \t \t1 – Ventas \n \t \t2 – Reabastecimiento \n \t \t3 - Nuevos Productos \n \t \t4 – Inventario \n \t \t0 - Salir: ");
        scanf("%d", &OPE);
        }
        }
        void Lectura(producto A[], int T)
        {
            int I;
            for (I = 0; I < T; I++)
                {
                    printf(" \n Ingrese informacion de producto %d", I + 1);
            printf(" \n \t clave: ");
            scanf("%d", &A[I].clave);
            fflush(stdin);
            printf(" \t Nombre:");
            gets(A[I].nombre);
            printf(" \t Precio: ");
            scanf("%f", &A[I].precio);
            printf(" \t Existencia: ");
            scanf("%d", &A[I].existencia);
            }
            }
            void Ventas(producto A[], int T)
            {
                int CLA, CAN, I, RES;
                float TOT, PAR;
                printf(" \n Ingrese clave del producto -0 para salir-: ");
                scanf("%d", &CLA);
                TOT = 0.0;
                while (CLA)
                    {
                        printf(" \t Cantidad: ");
                scanf("%d", &CAN);
                I = 0;
                while ((I < T) && (A[I].clave < CLA))
                    I++;
                if ((I == T) || (A[I].clave > CLA))
                    printf(" \n La clave del producto es incorrecta");
                else
                    if (A[I].existencia >= CAN)
                    {
                        A[I].existencia -= CAN;
                PAR = A[I].precio * CAN;
                TOT += PAR;
                }
                else
                    {
                        printf(" \n No existe en inventario cantidad solicitada. Solo hay %d", A[I].existencia);
                printf(" \n Los lleva 1 - Si 0 – No?: ");
                scanf("%d", &RES);
                if (RES)
                    {
                        PAR = A[I].precio * A[I].existencia;
                A[I].existencia = 0;
                TOT += PAR;
                }
                }
                printf(" \n Ingrese la siguiente clave del producto -0 para salir-: ");
                scanf("%d", &CLA);
                }
                printf(" \n Total de la venta: %f", TOT);
                }
                void Reabastecimiento(producto A[], int T)
                {
                    int CLA,CAN,I;
                    printf(" \n Ingrese clave del producto -0 para salir-: ");
                    scanf("%d", &CLA);
                    while (CLA)
                        {
                            I = 0;
                    while ((I < T) && (A[I].clave < CLA))
                        I++;
                    if ((I==T) || (A[I].clave > CLA))
                        printf(" \n La clave del producto ingresada es incorrecta");
                    else
                        {
                            printf(" \t Cantidad: ");
                    scanf("%d", &CAN);
                    A[I].existencia += CAN;
                    }
                    printf(" \n Ingrese otra clave del producto -0 para salir-: ");
                    scanf("%d", &CLA);
                    }
                    }
                    void Nuevos_Productos(producto A[], int *T)
                    {
                        int CLA, I, J;
                        printf(" \n Ingrese clave del producto -0 para salir-: ");
                        scanf("%d", &CLA);
                        while ((*T < 30) && (CLA))
                            {
                                I=0;
                        while ((I < *T) && (A[I].clave < CLA))
                            I++;
                            if (I == *T)
                                {
                                    A[I].clave = CLA;
                                    printf(" \t Nombre:");
                                    fflush(stdin);
                                    gets(A[I].nombre);
                                    printf(" \t Precio:");
                                    scanf("%f", &A[I].precio);
                                    printf(" \t Cantidad: ");
                                    scanf("%d", &A[I].existencia);
                                    *T = *T + 1;
                                    }
                                    else
                                        if (A[I].clave == CLA)
                                        printf(" \n El produNto ya se encuentra en el inventario");
                                    else
                                        {
                                            for (J = *T; J > I; J--)
                                            A[J] = A[J-1];
                                    A[I].clave = CLA;
                                    printf(" \t Nombre:");
                                    fflush(stdin);
                                    gets(A[I].nombre);
                                    printf(" \t Precio:");
                                    scanf("%f", &A[I].precio);
                                    printf(" \t Cantidad: ");
                                           scanf("%d", &A[I].existencia);
                                           *T = *T + 1;
                                           }
                                           printf(" \n Ingrese otra clave de producto -0 para salir-: ");
                                           scanf("%d", &CLA);
                                           }
                                           if (*T == 30)
                                            printf(" \n Ya no hay espacio para incorporar nuevos productos ");
                                           }
                                           void Inventario(producto A[], int T)
                                           {
                                               int I;
                                               for (I = 0; I < T; I++)
                                                {
                                                    printf("\nClave: %d", A[I].clave);
                                               printf("\t Nombre: %s", A[I].nombre);
                                               printf("\t Precio: %d", A[I].precio);
                                               printf("\t Existencia: %d \n", A[I].existencia);
                                               }
                                               }
