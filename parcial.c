#include <stdio.h>
#include <stdbool.h>
   int main() {
     int aux;
     int codigo, edad;
     float nota1, nota2, nota3, prom;
     double matricula;
     char inicial;
     char nombre[50];
     bool matriculaActiva, documento, induccion, monitor;
   printf("Ingrese codigo del estudiante: ");
   scanf("%d", &codigo);

   printf("Ingrese el nombre del estudiante: ");
   scanf("%s", nombre);

   printf("Ingrese inicial del apellido: ");
   scanf(" %c", &inicial);

   printf("Ingrese edad: ");
   scanf("%d", &edad);

   printf("Ingrese nota 1: ");
   scanf("%f", &nota1);

   printf("Ingrese nota 2: ");
   scanf("%f", &nota2);

   printf("Ingrese nota 3: ");
   scanf("%f", &nota3);

   printf("Ingrese valor de matricula: ");
   scanf("%lf", &matricula);

   printf("Tiene matricula activa?  (1 = si, 0 = no): ");
   scanf("%d", &aux);
     matriculaActiva = aux;
   printf("Presento documento?  (1 = si, 0 = no): ");
   scanf("%d", &aux);
     documento = aux;
   printf("Aprobo induccion? (1 = si, 0 = no): ");
   scanf("%d", &aux);
     induccion = aux;
   printf("Es monitor? (1 = si, 0 = no): ");
   scanf("%d", &aux);
     monitor = aux;
if (nota1 < 0 || nota1 > 5 || nota2 < 0 || nota2 > 5 || nota3 < 0 || nota3 > 5) {
printf("\n Error: Las notas deben estar entre 0.0 y 5.0\n");
return 0;
}
   prom = (nota1 + nota2 + nota3) / 3;
   printf("\nEl codigo es: %s\n", (codigo %2 == 0) ? "PAR" : "IMPAR");
if (prom < 3.0) {
   printf("Desempeno: REPROBADO\n");
}
else if (prom < 4.0) {
   printf("Desempeno: ACEPTABLE\n");
}
else if (prom < 4.5) {
   printf("Desempeno: BUENO\n");
}
else {
   printf("Desempeno: EXCELENTE\n");
}
if (matriculaActiva && documento && (induccion || monitor)) {
   printf("Acceso al laboratorio: PERMITIDO\n");
if (monitor) {
   printf("Acceso especial por ser monitor\n");
}
else {
   printf("Acceso normal con estudiante\n");
}
}
 else {
   printf("Acceso al laboratorio: DENEGADO\n");
}
printf("\n ===RESUMEN====\n");
printf("Nombre: %s %c\n", nombre, inicial);
printf("Edad: %d\n", edad);
printf("Promedio: %.2f\n", prom);
printf("Matricula: %.2lf\n", matricula);
return 0;
}
