/*Reto #5 “Suma y multiplicación”
Instrucciones: añadiendo un extra al reto anterior ahora el usuario ingresará 3 números, sumarás los 2 primeros y el resultado será multiplicado por el tercero. Añade las consideraciones del punto decimal del reto anterior.*/

#include<stdio.h>

int main(){
    float a,b,c, result;

    printf("Digit three values: ");
    scanf("%f %f %f", &a,&b, &c);

    result=a+b*c;

    printf("The result is: %.2f\n", result);
}