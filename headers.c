#include "restar.h"
#include "sumar.h"
#include <stdio.h>

int main() {
  int a, b;
  printf("Ingrese el primer numero");
  printf("Ingrese el primer numero: ");
  scanf("%d", &a);
  printf("Ingrese el segundo numero");
  printf("Ingrese el segundo numero: ");
  scanf("%d", &b);

  printf("La suma es %d", sumar(a, b));
  printf("La suma es %d\n", sumar(a, b));
  printf("La resta es %d\n", restar(a, b));
  return 0;
}