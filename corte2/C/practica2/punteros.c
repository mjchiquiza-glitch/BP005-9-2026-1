#include <stdio.h>

  void intercalar(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
  }
  int main() {
    int x = 10;
    int y = 20;

  printf("Antes: x = %d, y = %d\n", x, y);
  intercambiar(x, y);
  printf("Despues_ x = %d, y = %d\n", x, y);

return 0;
  }
