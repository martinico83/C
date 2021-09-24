#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valorX, valorY, resultado;

    printf("\nIngrese el valor de X: ");scanf("%f",&valorX);
    printf("\nIngrese el valor de Y: ");scanf("%f",&valorY);

    resultado = (sqrt(valorX)) / (pow(valorY,2)-1);

    printf("\nEl resultado es: %.2f\n",resultado);

    return 0;
}
