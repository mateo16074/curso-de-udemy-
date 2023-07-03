//Practica 10
/*Desarrolla un programa que solicite constantemente la carga de un número al usuario.
El programa finalizará cuando el usuario introduzca un 0, momento en el que se debe
visualizar la suma y el promedio de todos los números introducidos.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma=0,contador=0,numero=-1;
    //bucle while compara su numero es diferente a 0 para funcionar
    while (numero != 0){
        printf("Introduce un numero\n");
        scanf("%d",&numero);
        contador++;
        suma += numero;
    }

    float promedio = suma/contador;
    printf("La suma de todos los numeros es: %d y el promedio es: %.2f", suma,promedio);

}
