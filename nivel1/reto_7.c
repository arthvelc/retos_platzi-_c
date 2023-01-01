/*Reto #7 “Edad futura y pasada”
Instrucciones: pide al usuario que indique su nombre y su edad. Como mensaje de salida le indicarás que edad tuvo el año pasado y cuantos años tendrá el siguiente año.
Ejemplo: [nombre] el año pasado tenías X años y el próximo año cumplirás Y años.*/
#include <stdio.h>

int main(){
    char name[30];
    int age;

    printf("Digit your name: ");
    gets(name);
    printf("Digit your age: ");
    scanf("%i", &age);

    printf("%s el a%co pasado tenias %i a%cos y el porximo a%co tendras %i a%cos", name,164, age-1,164,164, age+1, 164);

    return 0;
}
