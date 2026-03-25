#include <stdio.h>
   int main(){
     int hora;
   printf("Ingrese la hora en militar: ");
   scanf("%d", &hora);
if (hora < 18) {
   printf ("Buenos dias.");
}
else {
   printf("Buenas noches.");
}
return 0;
}
