#include <stdio.h>

int main() {
    int numeroA, numeroB, numeroC;
    printf("Ingrese un numero: ");
    scanf("%d",&numeroA);
    printf("Ingrese otro numero: ");
    scanf("%d",&numeroB);
    printf("Ingrese otro numero: ");
    scanf("%d",&numeroC);
    if((numeroA >= numeroB) && (numeroA >= numeroC))
    {
        printf("El mayor numero es: %d\n", numeroA);
    }else
    if((numeroB >= numeroA) && (numeroB >= numeroC))
    {
        printf("El mayor numero es: %d\n", numeroB);
    }else
    {
        printf("El mayor numero es: %d\n", numeroC);
    }
    return 0;
}
