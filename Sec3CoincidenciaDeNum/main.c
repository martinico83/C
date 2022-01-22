#include <stdio.h>

int main() {
    int numA,numB,numC,adivinador;
    printf("Ingrese 3 numeros: ");
    scanf("%d%d%d",&numA,&numB,&numC);
    /*scanf("%d",&numB);
    scanf("%d",&numC);*/
    printf("\nIngrese el adivinador: ");
    scanf("%d",&adivinador);
    if((adivinador == numA) || (adivinador == numB) ||
       (adivinador == numC))
    {
        printf("\nADIVINASTES!!\n");
    }else
    {
        printf("\nNO HUBO COINCIDENCIA!!\n");
    }
    return 0;
}
