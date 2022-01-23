#include <stdio.h>

int main() {
    int numero;
    printf("Ingrese un numero del 1 al 12: "); scanf("%d",&numero);
    switch (numero) {
        case 1: printf("ENERO\n"); break;
        case 2: printf("FEBRERO\n"); break;
        case 3: printf("MARZO\n"); break;
        case 4: printf("ABRIL\n"); break;
        case 5: printf("MAYO\n"); break;
        case 6: printf("JUNIO\n"); break;
        case 7: printf("JULIO\n"); break;
        case 8: printf("AGOSTO\n"); break;
        case 9: printf("SEPTIEMBRE\n"); break;
        case 10: printf("OCTUBRE\n"); break;
        case 11: printf("NOVIEMBRE\n"); break;
        case 12: printf("DICIEMBRE\n"); break;
        default: printf("NO EXISTE UN MES QUE CORREESPONDA A ESE NUMERO!!"); break;
    }
    return 0;
}
