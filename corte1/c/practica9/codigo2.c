#include <stdio.h>
   int main (){
     int num;
   printf("Escriba un numero: ");
   scanf("%d", &num);
if (num > 0) {
   printf("Ese numero es positivo.");
}
else if (num < 0) {
   printf("Ese numero es negativo.");
}
else {
   printf("El valor del numero es 0.");
}
return 0;
}
