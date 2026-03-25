#include <stdio.h>
   int main() {
     char nombre[30];
     float nota1, nota2, nota3, promedio;
   printf("ingrese el nombre del estudiante: "); 
   scanf("%s", nombre);

   printf("Ingrese la nota1: ");
   scanf("%f", &nota1);

   printf("Ingrese la nota 2: ");
   scanf("%f", &nota2);

   printf("Ingrese lanota 3: ");
   scanf("%f", &nota3);
if ((nota1 < 0 || nota1 > 5) || (nota2 < 0 || nota2 > 5) || (nota3 < 0 || nota3 > 5)) {
   printf("Una o mas notas son invalidas.\n");
}
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
  else {
    printf("Resultado: Excelente desempeno.\n");
  }
}
return 0;
}
