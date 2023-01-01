/*Reto #3 “Mensaje multilínea”
Instrucciones: seguro has visto que en Platzi hay más de 600 cursos ¿puedes mostrar a que categorías corresponden en una sola línea de código?
Debe mostrarse así:*/

#include<stdio.h>

int main(){
    char categorias[6][50]={"Inglés", "Desarrollo e ingenieria",  "Negocios y emprendimiento", "Marketing", "Habilidades blandas", "Diseño y UX"};
    int i;

    printf("Platzi cuenta con cursos de: \n");
    
    for(i=0;i<6;i++){
        printf("%i. %s\n", i+1, categorias[i]);
    }
    return 0;
}
