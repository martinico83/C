#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valorA, valorB, valorC, resultadoA, resultadoB;

    printf("\nIngrese el valor de a: "); scanf("%f",&valorA);
    printf("\nIngrese el valor de b: "); scanf("%f",&valorB);
    printf("\nIngrese el valor de c: "); scanf("%f",&valorC);

    resultadoA = ((-valorB)+(sqrt(pow(valorB,2)-(4*valorA*valorC)))) / (2*valorA);
    resultadoB = ((-valorB)-(sqrt(pow(valorB,2)-(4*valorA*valorC)))) / (2*valorA);

    printf("\nEl primer resultado es: %.2f", resultadoA);
    printf("\nEl segundo resultado es: %.2f\n", resultadoB);

    return 0;
}
