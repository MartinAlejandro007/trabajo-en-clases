#include "div.h"
#include "mul.h"
#include "restar.h"
#include "sumar.h"
#include <stdio.h>

int main() {
  int a, b;
  int opcion = 0;

  printf("Ingrese el primer numero: ");
  scanf("%d", &a);
  printf("Ingrese el segundo numero: ");
  scanf("%d", &b);

  printf("La suma es %d\n", sumar(a, b));
  printf("La resta es %d\n", restar(a, b));
  //  printf("La suma es %d\n", sumar(a, b));
  // printf("La resta es %d\n", restar(a, b));
  printf("\n Ingrese la opcion 1(Sumar), 2(Restar), 3(Mult), 4(Div)");
  scanf("%d", &opcion);

  switch (opcion) {
  case 1:
    printf("La suma es %d\n", sumar(a, b));
    break;
  case 2:
    printf("La resta es %d\n", restar(a, b));
    break;
  case 3:
    printf("La Multiplicacion es %d\n", mul(a, b));
    break;
  case 4:
    div(a, b);
    printf("La Division es %d\n", div(a, b));
    break;
  default:
    printf("Error");
    break;
  }
  return 0;
}