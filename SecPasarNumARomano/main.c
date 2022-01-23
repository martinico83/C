#include <stdio.h>

int main() {
    int numero, millar, centena, decena, unidad;
    printf("Ingrese un numero maximo 3999: "); scanf("%d",&numero);
    unidad = numero % 10; numero /= 10;
    decena = numero % 10; numero /= 10;
    centena = numero % 10; numero /= 10;
    millar = numero % 10; numero /=10;

    switch (millar) {
        case 1: printf("M"); break;
        case 2: printf("MM"); break;
        case 3: printf("MMM"); break;
    }

    switch (centena) {
        case 1: printf("C"); break;
        case 2: printf("CC"); break;
        case 3: printf("CCC"); break;
        case 4: printf("CL"); break;
        case 5: printf("L"); break;
        case 6: printf("LC"); break;
        case 7: printf("LCC"); break;
        case 8: printf("LCCC"); break;
        case 9: printf("CM"); break;
    }

    switch (decena) {
        case 1: printf("X"); break;
        case 2: printf("XX"); break;
        case 3: printf("XXX"); break;
        case 4: printf("XL"); break;
        case 5: printf("L"); break;
        case 6: printf("LX"); break;
        case 7: printf("LXX"); break;
        case 8: printf("LXXX"); break;
        case 9: printf("XC"); break;
    }

    switch (unidad) {
        case 1: printf("I"); break;
        case 2: printf("II"); break;
        case 3: printf("III"); break;
        case 4: printf("IV"); break;
        case 5: printf("V"); break;
        case 6: printf("VI"); break;
        case 7: printf("VII"); break;
        case 8: printf("VIII"); break;
        case 9: printf("IX"); break;
    }

    return 0;
}
