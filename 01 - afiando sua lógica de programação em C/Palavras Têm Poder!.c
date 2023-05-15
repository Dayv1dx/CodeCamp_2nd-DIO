#include <stdio.h>
#include <string.h>

// Função que recebe uma string e inverte a ordem das letras.
void inverter(char palavra[]) {
  // TODO: Implemente a lógica para inverter a "palavra
  
  int tamanho = strlen(palavra);
  int i, j;
  char aux;

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        aux = palavra[i];
        palavra[i] = palavra[j];
        palavra[j] = aux;
    }
  
}

int main() {
  char palavra[100];

  // Lê a palavra a ser invertida do usuário.
  scanf("%s", palavra);

  // Chama a função que inverte a palavra.
  inverter(palavra);

  // Imprime a palavra invertida na tela.
  printf("%s", palavra);

  return 0;
}