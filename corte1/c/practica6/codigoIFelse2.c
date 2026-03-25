#include <stdio.h>
   int main() {
     int hora;
   printf("Ingrese la hora en militar: ");
   scanf("$%d", &hora);
if (hora < 12) {
   printf("Buenos dias.");
}
else if(hora < 18) {
   printf("Buena tarde.");
}
else {
   printf("Buenas noches.");
}
return 0;
}
