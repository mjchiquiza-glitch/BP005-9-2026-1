#include <stdio.h>
   int main() {
     int miedad;
     int edadval = 18;
   printf("Ingrese su edad: ");
   scanf("$d", &miedad);
if (miedad >>= edadval) {
   printf("Tiene dead suficiente para votar !");
}
else {
  printf("No tiene edad suficiente para votar");
}
return 0;
}
