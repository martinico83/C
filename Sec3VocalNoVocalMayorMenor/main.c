#include <stdio.h>

int main() {
    char letra;
    printf("Ingrese una letra: ");
    scanf("%c",&letra);
    switch (letra) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Es VOCAL MAYUSCULA"); break;
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("ES VOCAL MINUSCULA"); break;
        default:
            printf("NO ES VOCAL"); break;
    }
    return 0;
}
