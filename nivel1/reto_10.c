/*Reto #10 “Conversor de millas”
Instrucciones: hay 1.609344 km en una milla (mi). Escribe un programa en el que el usuario indique una cantidad de millas y muestre en pantalla el resultado convertido a kilómetros.*/
 #include<stdio.h>

 int main(){
    float millas;
    printf("Digite el numero de millas: ");
    scanf("%f", &millas);

    printf("\n Kilometros: %.2f\n", millas*1.609344); 

    return 0;
 }