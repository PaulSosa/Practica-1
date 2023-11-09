#include <stdio.h>
#include <stdlib.h>

// Alumnos

typedef struct
{
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
    } alumno;
    void lee(FILE *);
    void main(void)
    {
        FILE *ar;
        if ((ar = fopen ("ad1.dat", "r")) != NULL)
            escribe(ar);
        else
            printf(" \n El archivo no abre");
        fclose(ar);
        }
        void lee(FILE *ap)
        {
            alumno alu;
            fread(&alu, sizeof(alumno), 1, ap);
            while (!feof(ap))
                {
                    printf(" \n Matricula: %d", alu.matricula);
            printf(" \t Carrera: %d", alu.carrera);
            printf(" \t Promedio: %f \t ", alu.promedio);
            puts(alu.nombre);
            fread(&alu, sizeof(alumno), 1, ap);
            }
            }
