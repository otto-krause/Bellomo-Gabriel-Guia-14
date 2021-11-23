#include<stdio.h>
#include<stdlib.h>


int main()
{
    int matriz[4][13]={0}, sumtot=0, sumlin=0, I=0, J=0;

    do{
        printf("Ingresar el numero del colectivo: ");
        scanf("%d",&J);

        if(J>=1){
            printf("Ingresar la linea del colectivo: ");
            scanf("%d",&I);

            printf("Ingresar la cantidad recaudad: ");
            scanf("%d",&matriz[I][J]);

            system("cls");
            }
            else{
                break;
            }
    }while(J>=1);

    system("cls");

    for(I=1;I<=3;I++)
    {
        sumlin=0;

        printf("Linea %d\n", I);

        for (J=1;J<=12;J++)
        {
            printf("Recaudacion deL colectivo (%d): %d \n", J, matriz[I][J]);

            sumtot=sumtot+matriz[I][J];
            sumlin=sumlin+matriz[I][J];
        }
        printf("\nRecaudacion de la linea (%d): %d\n\n", I, sumlin);
    }
    printf("\nRecaudacion total: %d\n", sumtot);
}


