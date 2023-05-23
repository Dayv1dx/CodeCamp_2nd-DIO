#include <stdio.h>

void trocar(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int quantidade){ 
  // TODO: Implemente o algoritmo "Selection Sort" para ordenação DECRESCENTE.
  // Dica: O método "trocar" pode ser útil ;)
  int i, j, min, aux;
  for (i = 0; i < (quantidade-1); i++) 
  {
     min = i;
     for (j = (i+1); j < quantidade; j++) {
       if(array[j] < array[min]) 
         min = j;
     }
     if (i != min) {
       aux = array[i];
       array[i] = array[min];
       array[min] = aux;
     }
  }
}

int main() {
  // Lê os nossos dados de entrada:
  int quantidade;
  scanf("%d", &quantidade);
  int armaduras[quantidade];
  for (int i = 0; i < quantidade; i++) {
      scanf("%d", &armaduras[i]);
  }
  
  // Executa o algoritmo "selectionSort" para deixar as "armaduras" em ordem DECRESCENTE.
  selectionSort(armaduras, quantidade);
  
  // Imprime as "armaduras" ordenados.
  for (int i = quantidade; i > 0 ; i--) {
      printf("%d ", armaduras[i - 1]);
  }
  
  return 0;
}