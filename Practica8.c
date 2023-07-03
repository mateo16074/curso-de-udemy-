//Practica 8
//Programa que muestre en pantalla todos los multiplos de 3 entre 1 y 100
#include <stdio.h>
#include <stdlib.h>


int main()
{
    //for(variable i de control con valor 1 para el inicio,condicion del bucle, aumento)
    for (int i=1; i<=100; i++){
        if (i%3==0){
            printf("%d\n",i);
        }
    }
}
