#include <stdio.h>
#include <stdbool.h>
   int main() {
     int edad;
     int tcc;
   printf("Ingrese la edad: ");
   scanf("%d", &edad);

   printf("Es ciudadano? (1 = si, 0 =  no): ");
   scanf("%d", &tcc);
if (edad >= 18) {
    printf("Tiene edad suficiente para votar.\n");
  if (tcc) {
    printf("Y es ciudadano, asi que puede votar\n");
  }
  else {
    printf("Pero debe ser ciudadano para votar.\n");
  }
}
else {
   printf("No tiene la edad suficiente para votar.\n");
}
return 0;
}
