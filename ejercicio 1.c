//práctica 8 ejercicio 1//
//Mejía Calderón Jesús Vicente//

#include<stdio.h>

 int main()
 {
     
     int par,impar, n =0;
     int cont =1;
     
     printf("Ingrese un número: ");
     scanf("%d", &n);
     
     while (cont <=n)
     {
         if(cont % 2 == 0)
         {
             par =  cont;
         }
         else
         {
             impar = cont;
         }
        cont++;
     }  
     printf("\nel último numero par es: %d",par);
     printf("\nel último numero impar es: %d",impar);
 return 0;
 }
