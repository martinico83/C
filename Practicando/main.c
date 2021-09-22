#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //arreglar ya que no puedo ingresar nombres con espacios
    char titulo[30];
    char nombre[30];

    printf("Ingrese el titulo del libro: ");

    fgets(titulo,sizeof(titulo),stdin);
    titulo[strlen(titulo)-1]='\0';

    printf("Ingrese el nombre del autor: ");

    fgets(nombre,sizeof(nombre),stdin);
    nombre[strlen(nombre)-1]='\0';

    printf("El titulo del libro es: %s y el autor se llama %s",titulo,nombre);

    return 0;
}
