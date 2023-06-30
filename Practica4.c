//Programa convertidor de divisas 
//Crear un programa que convierta euros a pesetas
//Make a program that transform euros to pesetas

#include<stdio.h>
#include<stdlib.h>

int main(){
    float e;
    printf("INTRODUZCA LOS EUROS QUE QUIERE TRANSFORMAR\n");
    scanf("%f",&e);
    //La forma del ejercicio anterior para definir la variable p = e * 166.386
    printf("%.2f EUROS EQUIVALEN A %.2f PESETAS\n", e, e * 166.386 );
}