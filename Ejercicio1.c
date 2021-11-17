#include <stdio.h>
#include <stdlib.h>


int main()
{

    int matriz[2] [3]={0},I=0, J=0;

    printf("Ingrese tres numeros por fila: \n");
    for(I=0;I<2;I++)
    {
        for(J=0;J<3;J++)
        {
            scanf("%d", &matriz[I] [J]);
        }
        printf("\n");
    }

    system("cls");

    for(I=0;I<2;I++)
    {
        for(J=0;J<3;J++)
        {
            printf("%d\t", matriz [I] [J]);
        }
        printf("\n");
    }
    return 0;
}
