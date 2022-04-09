#include <stdio.h>

int main (){
    char nombre[80] ;
    int edad;
    //char edad[3];
    printf("Ingresar su nombre: ");
    scanf("%79s", nombre);
    printf("Ingresar su edad: ");
    scanf("%d", &edad);
    printf("Hola %s! Tenes %d años", nombre, edad);

    return 0;
}