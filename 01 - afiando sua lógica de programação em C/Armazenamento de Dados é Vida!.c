#include <stdio.h>

int main() {
  int capacidadeAtual, aumentoPercentual;
  
  // Lê as entradas do usuário
  scanf("%d %d", &capacidadeAtual, &aumentoPercentual);

  // TODO: Declare e calcule a nova capacidade do disco de Mithril.
  int resultado = capacidadeAtual + ((aumentoPercentual * capacidadeAtual) / 100);
  // TODO: Imprima a nova capacidade.
  printf( "%d", resultado );
  return 0;
}