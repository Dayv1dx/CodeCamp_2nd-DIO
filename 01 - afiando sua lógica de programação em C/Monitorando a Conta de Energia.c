#include <stdio.h>

int main() {
  int consumo1, consumo2, consumo3;
  float media;

  // Lendo os valores de consumo das três máquinas
  scanf("%d %d %d", &consumo1, &consumo2, &consumo3);

  media = (consumo3 + consumo2 + consumo1) / 3.0;
  
  printf("%.2f", media);
  
  
  return 0;
}