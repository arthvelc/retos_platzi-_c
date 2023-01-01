/*Reto #6 “Resta de pizzas”
Instrucciones: llegaste a una fiesta con X cantidad de rebanadas de pizza (indicadas por el usuario), después de un rato se consumió Y cantidad de rebanadas y quedan Z. Fácil ¿cierto?
El reto está en que expreses lo que sucede es una forma comprensible para cualquier persona, imprescindible pensar en tus usuarios 😉*/

#include<stdio.h>

int main(){
    int rebanadas_totales, rebanadas_consumidas, rebanadas_restantes;

    printf("Digite el número de rebanadas que tines al iniciar: ");
    scanf("%i", &rebanadas_totales);
    printf("Digita el número de rebanadas que se comieron: ");
    scanf("%i", &rebanadas_consumidas);
    
    printf("el numero de rebanadas que resta es de: %i\n", (rebanadas_restantes=rebanadas_totales-rebanadas_consumidas));
    return 0;
}