#include <stdio.h>

int main() {
    int edad;
    printf("Introduzca su edad: ");
    scanf("%d",&edad);
    if((edad >= 18) && (edad <= 25))
    {
        printf("Dentro del rango!!");
    }else
    {
        printf("Fuera del rango!!");
    }
    return 0;
}
