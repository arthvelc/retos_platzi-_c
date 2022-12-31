// Reto #1 “Hola Mundo”
//Instrucciones: este es un clásico de clásicos, pero haremos un pequeño cambio. En lugar de solo imprimir un mensaje en pantalla, pedirás al usuario que digite un nombre y mostrarás en pantalla lo siguiente: Hola, [nombre]

#include<stdio.h>
#include<stdlib.h>
//function prototipe
char print_name(name);

int main(){
    char name[20];

    printf("Digit your name: ");
    gets(name);

    print_name(name);

    system("pause");
    return 0;
}
// this function print Hola + name 
char print_name(name){
    printf("Hola %s\n\n", name);
}
