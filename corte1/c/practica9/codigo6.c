#include <stdio.h>
#include <stdbool.h>
   int main() {
     bool iln;
     bool idm;
     int nvlseg;
     int loginInput, adminInput;
   printf("Esta conectado? (1 = si, 0 = no): ");
   scanf("%d", &loginInput);
      iln = (loginInput == 1);
   printf("Es administrador? (1 = si, 0 = no): ");
   scanf("%d", &adminInput);
      idm = (adminInput == 1);
   printf("Ingrese su nivel de seguridad (1 = mas alto, 4 = mas bajo): ");
   scanf("%d", &nvlseg);
if (iln && (idm || nvlseg <= 2)) {
   printf("Acceso concedido\n");
}
else {
   printf("Acceso denegado\n");
}
return 0;
}
