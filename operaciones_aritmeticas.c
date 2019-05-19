/*1. Pedir 2 al usuario y sumarlos, restarlos, multiplicarlos y dividirlos. */

#include<stdio.h>

int main(){
    int n1,n2, suma = 0, resta=0, mult=0, div=0;
    
    printf("Digite 2 numeros: ");
    scanf("%i %i",&n1,&n2);
    
    suma = n1 + n2;
    resta = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    printf("La suma es: %i\n",suma);
    printf("La resta es: %i\n",resta);
    printf("La mult es: %i\n",mult);
    printf("La div es: %i\n",div);

    return 0;

}
