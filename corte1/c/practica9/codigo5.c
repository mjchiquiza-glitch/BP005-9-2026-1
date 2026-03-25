#include <stdio.h>
   int main() {
      int temp;
   printf("Ingrese un valor de temperatura: ");
   scanf("%d", &temp);
if (temp < 0) {
   printf("Esta congelando\n");
}
else if (temp < 20) {
   printf("Esta fresco.\n");
}
else {
   printf("Esta caluroso.\n");
}
return 0;   
  }
