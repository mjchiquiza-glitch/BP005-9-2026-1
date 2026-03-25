#include <stdio.h>
   int sum(int x1, int x2) {
     int result;
     result= x1 + x2;
return result;
}
   int res(int x1, int x2) {
     int result;
     result= x1 - x2;
return result;
}
   int mult(int x1, int x2) {
     int result;
     result= x1 * x2;
return result;
}
   int main () {
       int a, b, r;
       a= 3;
       b= 5;
       r= sum(a,b);
   printf("El resultado de la suma es: %d\n", r);
   printf("El resultado de la resta es: %d\n", res(a,b));
   printf("El resultado de la multiplicacion es: %d\n", mult(a,b));
}
