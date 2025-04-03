//Práctica 8 ejercicio 2//
//Mejía Calderón Jesús Vicente//

#include<stdio.h>

int main()
 {
    int sum=0, num;
    int i=0;
    
    do
    {
        printf("Escribe un número: ");
        scanf("%d", &num);
        sum = sum + num;
        i= i++;
    }
    while (i<=10 || sum>=100);
    
    if (sum > 100)
    {
        printf("\nLa suma de los numeros introducidos es superior a 100: ");
    }
    else
    {
        printf("\nSe han introducido 10 numeros\n");
    }
 return 0;
 }
