#include <stdio.h>
#include <stdbool.h>
 
   int main() {
     int hora;
   printf("Ingrese la hora en militar: ");
   scanf("%d", &hora);
  bool isDay = hora < 18;
if (isDay) {
   printf("Buenos dias.");
}
else {
  printf("Buenas noches.");
}
return 0;
}
