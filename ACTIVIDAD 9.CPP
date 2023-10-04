//Cesar Alejandro Velazquez Mercado
//372329
//Me genera matrices y vectores
//03/10/2023
#include "Validar.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int llenarV(int Vector[15]);
int llenar_matriz(int matriz[4][4]);

int main()
{
    int op, Vector[15];
    srand(time(NULL));
    do
    {
        printf("\tMENU \n");
        printf("1.- LLENAR VECTOR \n");
        printf("2.- LLENAR MATRIZ \n");
        printf("3.- IMPRIMIR VECTOR\n");       
        printf("4.- IMPRIMIR MATRIZ\n");
        printf("5.- ORDENAR VECTOR\n");
        printf("6.- BUSCAR VALOR EN VECTOR\n");
        printf("0.- SALIR\n\n");
        printf("\n"); 
        op = valinum();
       if (op == 1)
       {
            llenarV(Vector);
       }
        
    }while(op!=0);
    
    printf("ADIOS!!!");
    return 0;
}


int llenarV(int Vector[15])
{
    int i, j, va, llenar;
    for (i = 0; i < 15; i++)
    {
        llenar = rand()%200 + 100;
        do
        {
            for (j = 0; j < i; j++)
            {   
                if (llenar != Vector[j])
                {
                    
                    va = 1; 
                    printf("bien");
                }
                else
                {
                    va = 0;
                }
            }
            Vector[i] = llenar;
        } while (va != 0);
    }
    printf("lleno");
    return Vector[15];
}

int llenar_matriz(int matriz[4][4])
{
    system("CLS");
    int n = 0, p = 0;
    printf("llenando...\n\n");
    system("Pause");
    printf("\n\n\n\nPresione una tecla para continuar...");
    system("CLS");
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 4; i++)
        {
            do
            {
                p=rand()%16 + 1;
                for (int j = 0; j < 4; j++)
                {
                    for (int i = 0; i < 4; i++)
                    {
                        if (p == matriz[j][i])
                        {
                            n==0;
                        }
                        else
                        {
                            n==1;
                        }
                        
                    }
                }
            } while (n == 0);
            matriz[j][i] = p;
        }
    }
    printf("Se lleno exitosamente!!! \n\n");
    system("Pause");
    printf("\n\n\n\nPresione una tecla para continuar...");
    system("CLS");
    return matriz[4][4];
}

/*
int llenarV()
{
    int i, j, va, llenar, Vector[15];
    for (i = 0; i < 15; i++)
    {
        llenar = rand()%200 + 100;
        do
        {
            for (j = 0; j < i; j++)
            {   
                if (llenar = Vector[j])
                {
                    Vector[i] = llenar;
                }
            }
        } while (va != 0);
    }
    
}
*/