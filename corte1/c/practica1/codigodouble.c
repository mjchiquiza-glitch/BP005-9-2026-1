#include <stdio.h>
    int main() {
       double n1, n2, suma;
    printf("Ingrese el primer digito (double): ");
    scanf("%lf", &n1);

    printf("Ingrese el segundo digito (double): ");
    scanf("%lf", &n2);
      
       suma = n1 + n2;

    printf("La suma de %.2f y %.2f es: %2f\n", n1, n2, suma);
return 0;
}
