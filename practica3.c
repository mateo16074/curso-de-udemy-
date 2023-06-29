#include<stdio.h>
#include<stdlib.h>

int main(){

    float b, a;
    printf("Introduzca la base del rectangulo\n");
    scanf("%f", &b);
    printf("Introduzca la altura del rectangulo\n");
    scanf("%f", &a);
    float c= a*b;
    printf("El rectangulo con base %.2f y altura %.2f es: %.2f\n",b,a,c);
    // %.2f nos permite determinar cuantos decimales muestren los numeros float
    // %.2f allows the number of decimals we want to show
}