/*Reto #8 “Divide la cuenta”
Instrucciones: vas con tus amigos a tu restaurante favorito y acuerdan dividir la cuenta. Para facilitar las cosa pedirás al usuario que indique el total a pagar, entre cuantas personas se dvidirá la cuenta, porcentaje de propina a incluir, un porcentaje de impuestos, total a pagar incluyendo propina más impuestos y el total a pagar por cada persona.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    float total, personas;
    system("clear");

    printf("Digite el total de la cuenta: ");
    scanf("%f", &total);
    printf("Digite entre cuantas personas se dividirá la cuenta: ");
    scanf("%f", &personas);

    system("clear");

    printf("RESULTADOS\n\nImpuestos %.2f\nPropina %.2f\nA cada quien le toca %.2f\nTotal a pagar %.2f\n",total*.16, total*.10, total/personas, total+(total*.16)+(total*.10));

    
    return 0;
}