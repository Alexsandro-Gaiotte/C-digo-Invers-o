#include <stdio.h>

void reverseList(int lista[], int tamanho) {
  for (int i = 0, j = tamanho - 1; i < j; ++i, --j) {
    int temp = lista[i];
    lista[i] = lista[j];
    lista[j] = temp;
  }
}

int main() {
  int numeros[] = {6, 4, 3, 2, 1};
  int tamanho = sizeof(numeros) / sizeof(numeros[0]);

  printf("Lista original: ");
  for (int i = 0; i < tamanho; ++i) {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  reverseList(numeros, tamanho);

  printf("Lista invertida: ");
  for (int i = 0; i < tamanho; ++i) {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  return 0;
}
