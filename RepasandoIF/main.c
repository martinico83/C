#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, valor = 5;
    printf("\nIngrese un numero: ");
    scanf("%d",&numero);
    /*if(numero == valor)
    {
        printf("\nLa pegastes!!!\n");
    }
    else
    {
        printf("\nNo es el valor!\n");
    }*/
    if(numero != valor)
    {
        printf("\nEs distinto!\n");
    }
    else
    {
        printf("\nLa pegastes!!!\n");
    }

    return 0;
}
