#include <stdio.h>
#include <stdlib.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void quickSort(int array[], int inicio, int fim){ 
  // TODO: Implemente o algoritmo "Quick Sort" para ordenação.
  // Dica: O método "trocar" pode ser útil ;)

    int i, j, pivo;
    if (inicio < fim) {
        pivo = inicio;
        i = inicio;
        j = fim;
        while (i < j) {
            while (array[i] <= array[pivo] && i < fim) {
                i++;
            }
            while (array[j] > array[pivo]) {
                j--;
            }
            if (i < j) {
                trocar(&array[i], &array[j]);
            }
        }
        trocar(&array[pivo], &array[j]);
        quickSort(array, inicio, j-1);
        quickSort(array, j+1, fim);
    }
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int joias[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &joias[i]);
  }
  
  int inicio = 0;
  int fim = quantidade - 1;
  // Executa o algoritmo "quickSort" para ordenar as "joias".
  quickSort(joias, inicio, fim);
  
  // Imprime as "joias" ordenadas.
  for (int i = 0; i < quantidade; i++) {
      printf("%d ", joias[i]);
  }
  
  return 0;
}