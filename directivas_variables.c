//Directivas del Procesador y Variables

#include<stdio.h> //Libreria

#define PI 3.1416 //Macro

int y = 5; //Variable Global

int main(){
    int x = 10; //Variable Local

    float suma = 0;

    suma = PI + x;

    printf("La suma es: %.3f",suma);

    return 0;
}	
