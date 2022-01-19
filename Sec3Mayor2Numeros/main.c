#include <stdio.h>

int main() {
    float numeroA,numeroB,max;
    printf("Ingrese un numero: \n");
    scanf("%f",&numeroA);
    printf("Ingrese otro numero: \n");
    scanf("%f",&numeroB);

    if(numeroB>=numeroA)
    {
        max = numeroB;
        printf("El numero mayor es: %.2f",numeroB);
    } else
    {
        max = numeroA;
        printf("El numero mayor es: %.2f",numeroA);
    }

    return 0;
}
