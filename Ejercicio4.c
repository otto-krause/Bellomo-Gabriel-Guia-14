#include <stdio.h>
#include <stdlib.h>


int main()
{

    int matriz[4][13]={0}, menor=0, I=0, J=0;
    int suma[4]={0};

    for (I=0;I<3;I++)
    {
        printf("Linea numero %d: \n", I+1);
        for (J=0;J<12;J++)
        {
            printf("Colectivo numero %d: ", J+1);
            scanf("%d", &matriz[I][J]);
            suma[0]=suma[0]+matriz[I][J];
        }
        printf("\n");
    }

    system("cls");

    printf("Recaudacion total por linea de colectivo: ");
    printf("\n");
    for (I=0;I<3;I++)
    {

        for (J=0;J<12;J++)
        {
            suma[I+1]=suma[I+1]+matriz[I][J];
        }
        printf("Linea %d\t %d", I+1, suma[I+1]);
        printf("\n");
    }

    printf("\n");
    printf("\n");

    printf("Recaudacion total por auto: ");
    printf("\n");
    for (I=0;I<3;I++)
    {
        printf("Linea %d\t   ", I+1);

        for (J=0;J<12;J++)
        {
            printf("%d\t", matriz[I][J]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    printf("Recaudacion total: ");
    printf("\n");
    printf("Linea total\t %d", suma[0]);
}

