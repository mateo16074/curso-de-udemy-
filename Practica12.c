//Practica 12
//Escribir un programa que dado un vector de enteros de
//10 elementos, muestre el valor máximo y el mínimo
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vector[10] = {4,7,9,75,-5,6,12,-18,0,1};//vector con elementos ya definidos
    int maximo = vector[0]; //se declara a maximo como el numero en la posicion 0 igual con minimo
    int minimo = vector[0];

    for (int i=1;i<10;i++){
        if (vector[i] > maximo){
            maximo = vector[i];
        }

        if (vector[i] < minimo){
            minimo = vector[i];
        }
    }

    printf("Valor maximo: %d\nValor minimo: %d",maximo,minimo);
}
