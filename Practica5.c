/*Escribe un programa que compruebe si el usuario a reprobado(<5), 
si a aprobado (6), bien(7-8), sobreslaiente(10)*/

/*Make a program that check if the user failed(<5), approved(6), good(7-8)
you genius mf(9-10)*/
#include<stdio.h>
#include<stdlib.h>

int main(){


    int n;
    printf("Ingrese su nota final \n");
    scanf("%d",&n);

    if (n<=5) {
       printf("reprobado\n");
    }
   else if (n==6) {
       printf("aprobado\n");
   }
   else if (n==7||n==8) {
    printf("bien");
   }
   else if (n==9||n==10) {
    printf("sobresaliente");
   }else {
    printf("ERROR");
   }
   
    
}