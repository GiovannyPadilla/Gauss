#include <stdio.h>

int main ()

{
int num, sumg;

   printf("Ingrese un numero\n");
    scanf("%d", &num);

    sumg = (num * (num+1))/2;

    printf("La suma de Gauss del numero ingresado es:%d", sumg);
       
   return 0;
}