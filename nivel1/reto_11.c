/*Reto #11 “Cuantas veces un número en otro”
Instrucciones: pide al usuario ingresar un número mayor a 1000 y otro menor a 100. Indica de una forma sencilla de entender al usuario cuantas veces cabe el número menor a 100 en el número mayor a 1000*/
#include<stdio.h>

int main(){
   int mayor, menor;
   
   do{
      printf("Digita un numero myor a 1000: ");
      scanf("%i", &mayor);
      printf("Digita un numero menor a 100: ");
      scanf("%i", &menor);
   } while (mayor<1000 && menor>100);

   printf("\n\nEl numero %i cabe %i veces en el %i.\n", menor, mayor/menor, mayor);

   return 0; 
}