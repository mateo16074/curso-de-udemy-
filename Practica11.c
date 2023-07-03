//Practica 11
/*Cargar por teclado y almacenar en un vector el peso de 5 personas.
Obtener el promedio de los mismos. Contar cuántas personas pesan más
que el promedio y cuántas pesan menos.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pesos[5];//matriz para el peso, 5 define el numero de personas
    float suma = 0;

    for (int i=0;i<5;i++){
        printf("Introduce un peso para almacenarlo\n");
        scanf("%f",&pesos[i]);
        suma = suma + pesos[i];
    }

    float promedio = suma / 5;
    int cont_mayor_igual = 0;
    int cont_menor = 0;

    for (int i=0;i<5;i++){
        if (pesos[i] >= promedio){
            cont_mayor_igual ++;
        }
        else{
            cont_menor++;
        }
    }
    printf("El promedio de pesos es: %.2f",promedio);
    printf("Numero pesos mayores o iguales que el promedio: %d, Numero pesos menores que el promedio: %d",cont_mayor_igual,cont_menor);


}
