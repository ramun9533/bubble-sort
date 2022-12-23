#include <stdio.h>

#define MAXSIZE 10

void main()
{

    // imprimira basura a principio, a veces,no se por que?
    int vector[MAXSIZE] = {10, 7, 4, 1, 8, 5, 2, 9, 6, 3};
    int acum = 0;

    for (int i = 0; i < MAXSIZE - 1; i++) // es caso especifico de bubble sort (optimizacion de bubble sort)
    {
        for (int j = 0; j < MAXSIZE - 1 - i; j++)
        {
            if (vector[j] > vector[j + 1])
            {
                // swap intercambiamos de ambos elementos
                acum = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = acum;
            }
        }
    }

    for (int i = 0; i < MAXSIZE; i++) // ejemplo de idioma: i < MAXSIZE (formula que solemos escribir ellenguaje)
    {
        printf("%d\t", vector[i]);
    }
    printf("\n");

    // for (int i=0;i<=9;i++)
    // {
    //     vector[9]=0;
    // }
    // acum =0;
}