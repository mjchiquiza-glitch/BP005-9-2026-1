#include <stdio.h>
#include <stdbool.h>
   int main() {
     int codigo, edad;
     float nota1, nota2, nota3;
     double matricula;
     char inicialapellido, nombre[30];
     bool tienematricula, presentadoc, aprobinduccion, esmonitor;
   printf("ingrese su nombre : ");
   scanf("%s", nombre);

   printf("Ingrese la incial de su apellido: ");
   scanf("%c", &inicialapellido);

   printf("Ingrese su codigo de estudiante: ");
   scanf("%d", &codigo);

   printf("Ingrese su edad: ");
   scanf("%d", &edad);

   printf("ingrese nota 1, nota 2, nota 3 (0.0 - 5.0):\n");
   scanf("%f %f %f", &nota1, &nota2, &nota3);
if ((nota1 < 0 || nota1 > 5) || (nota2 < 0 || nota2 > 5) || (nota3 < 0 || nota>
   printf("Una o mas notas son invalidas.\n");
return 1;
}
   prinf("ingrese el valor de la matricula");
else {
      promedio = (nota1 + nota2 + nota3) /3;
    printf("\nEstudiante: %sn", nombre);
    printf("Promedio: %.2f\n", promedio);
  if (promedio < 3.0) {
    printf("Resultado: Reprobado.\n");
  }
  else if (promedio < 4.0) {
    printf("resultado: Aprobado con nota aceptable.\n");
  }
  else if (promedio < 4.5) {
    printf("Resultado: Buen desempeno.\n");
  }
return 0;
}
