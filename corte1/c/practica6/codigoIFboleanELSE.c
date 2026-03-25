#include <stdio.h>
#include <stdbool.h>
   int main() {
     int hora;
   printf("Ingrese la hora en militar: ");
   scanf("%d", &hora);
     bool isMorning = hora < 12;
     bool isDay = hora < 18;
if (IsMorning) {
   printf("Buenos dias.");
}
else if (isDay) {
   printf("Buena tarde.");
} 
else {
   printf("Buenas noches."); 
}
return 0;
}
