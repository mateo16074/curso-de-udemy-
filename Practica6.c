/*Escribir un programa que se utilice para calcular el precio final de venta de coches de 
segunda mano de un concesionario. Para ello, el programa debe pedir al usuario que introduzca
el precio base del vehículo, el número de kilómetros y su consumo.Si los kilómetros son
inferiores a 20000 y su consumo igual o inferior a 5, incrementar el precio base un 20%.
Si los kilómetros son superiores a 20000 y su consumo igual o inferior a 5, 
incrementar el precio base un 10%.Si el consumo es superior a 5, incrementar el precio base un 5%.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int pb, km;
    float consumo,pf;

    printf("Introduzca el precio basico del vehiculo: \n");
    scanf("%d",&pb);
    printf("INTRODUZCA LOS KILOMETROS: \n");
    scanf("%d",&km);
    printf("INTRODUZCA EL CONSUMO \n");
    scanf("%f",&consumo);

    if (km<20000 && consumo<=5)
    {
        pf=pb * 1.2;
    }
    else if (km>20000 && consumo<=5)
    {
        pf=pb*1.1;
    }
    else if(consumo>5)
    {
        pf=pb*1.05;
    }

    printf("El precio final del vehiculo es: %.2f",pf);

}