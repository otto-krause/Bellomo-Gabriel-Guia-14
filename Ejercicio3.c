#include <stdio.h>
#include <stdlib.h>


int main()
{

    int matriz[2][3]={0}, menor=0, suma=0, I=0, J=0;

    printf("Ingresar tres numeros por cada fila: \n");

    for (I=0;I<2;I++)
    {
        for (J=0;J<3;J++)
        {
            scanf("%d", &matriz[I][J]);
        }
        printf("\n");
    }

    system("cls");

    printf("Matriz modificada:\n\n");

    for (J=0;J<3;J++)
    {
        matriz[0][J]=matriz[0][J]*4;
    }

    for (I=0;I<2;I++)
    {
        matriz[I][2]=matriz[I][2]*3;
    }
    for (I=0;I<2;I++)
    {
        for (J=0;J<3;J++)
        {
            printf("%d\t", matriz[I][J]);
        }
        printf("\n");
    }

    menor=matriz[0][0];

    for (I=0;I<2;I++)
    {
        for (J=0;J<3;J++)
        {
            if (menor>matriz[I] [J])
            {
                menor=matriz[I] [J];
            }
            suma=suma+matriz[I] [J];
        }
        printf("\n");
    }
    printf("\nEl menor valor de la matriz es: %d\nY la suma de sus valores es: %d", menor, suma);
}
