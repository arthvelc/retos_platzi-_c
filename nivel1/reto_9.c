/*Reto #9 “Calculando días”
Instrucciones: escribe un programa al que le indiques una cantidad de días y como resultado deberá mostrar cuantas horas, minutos y segundos hay en dicha cantidad de días.*/
#include<stdio.h>

int main(){
    int dias;

    printf("Digite una cantidad de dias: ");
    scanf("%i", &dias)

    printf("En %i dias existen:\nHoras: %i\nMinutos: %i\nSegundos: %i\n",dias, dias*24, dias*24*60, dias*24*60*60);

    return 0;
}