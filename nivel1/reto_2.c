/*Reto #2 “Hola… nombre y apellido:”
Instrucciones: Ahora que sabemos incluir nombres, podemos agregar más datos. Intentemos con un apellido para tener algo así: ``Hola, [nombre] [apellido]```*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    char name[20], last_name[20];
    //pedir y guardar nombre de los usuarios;
    printf("Digit your name: ");
    gets(name);
    printf("Digit ypur last name: ");
    gets(last_name);

    //imprimir el mensaje

    printf("Hola %s %s", name, last_name);

    system("pause");
    return 0;
}