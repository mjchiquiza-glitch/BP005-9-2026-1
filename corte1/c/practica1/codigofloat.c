#include <stdio.h>
   int main(){
      float n1, n2, suma;
   printf("Ingrese el primer digito: ");
   scanf("%f", &n1);

   printf("Ingrese el segundo digito: ");
   scanf("%f", &n2);
  
   suma = n1 + n2;
  
   printf("La suma de %.2f y %.2f es: %.2f\n", n1, n2, suma);
return 0;
}
