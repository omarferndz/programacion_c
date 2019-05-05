//Tipos de Datos

#include<stdio.h>

int main(){
    char a = 'e'; //tipo de dato caracter tamaño= 1byte Rango: 0..255
    short b = -15; //tamaño= 2bytes Rango: -128...127
    int c = 1024; //tamaño= 2bytes Rango: -32768...32767
    unsigned int d = 128; //tamaño= 2bytes Rango: 0...65535
    long e = 123456; //tamaño= 4bytes
    float f = 15.678; //tamaño= 4bytes
    double m = 123123.123123; //tamaño = 8bytes

    printf("El elemento es: %lf\n",m);

    return 0;
}
