#include <stdio.h>

 int main(){

    int torre = 1, bispo, rainha = 1;

    printf("Torre anda cinco casas acima: \n");

    while (torre <=5)
    {
        printf("Cima\n");
      torre++;
    }

    printf("\nRainha anda 7 casa a esquerda: \n");

    do
    {
      if (rainha <= 7)
      {
        printf("Esquerda\n");
      }
      rainha++;

    } while (rainha <= 7);

    printf("\nBispo anda 3 casas na diagonal pra cima a direita: \n");
    
    for (bispo = 1; bispo <= 6; bispo++)
    {
      if (bispo % 2 == 0){
        printf("Cima\n");
      } else {
        printf("Direita\n");
      }  
    }

    return 0;
 }