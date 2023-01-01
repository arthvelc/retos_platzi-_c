/*Reto #4 “Suma de enteros”
Instrucciones: otro clásico conocido, donde pedirás al usuario que ingrese 2 números y muestre en pantalla el resultado. Si quieres añadir más dificultad puedes utilizar números con punto decimal y especificar el número de decimales después del punto.
Ejemplo: 2.5633 + 5.6883 = 8.25*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float value_1, value_2, sum;
    printf("Digit first number: ");
    scanf("%f", &value_1);
    printf("Digit second number: ");
    scanf("%f", &value_2);

    sum=value_1+value_2;

    printf("The result is: %.2f\n", sum);
    return 0;
}