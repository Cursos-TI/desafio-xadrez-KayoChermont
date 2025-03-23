#include <stdio.h>

void moverTorre(int casas) {
  if (casas > 0) { // se o número de casas for maior que zero imprime direita
      printf("Diretia\n");
      moverTorre(casas - 1); //cahama a funcao recursividade removendo um de casas
  }
}
void moverRainha(int casas){
  if (casas > 0) { // se o número de casas for maior que zero imprime esquerda
      printf("Esquerda\n");
      moverRainha(casas - 1); //cahama a funcao recursividade removendo um de casas
  }
}
void moverBispo(int casas){
  if (casas > 0){ 
   if (casas % 2 ==0) { // se número de casas for par imprime direita
      printf("Direita\n");
   } else { //se o número de casas for impar imprime cima
      printf("Cima\n");
   }
   moverBispo(casas - 1); //cahama a funcao recursividade removendo um de casas
  }
}

 int main(){

    moverTorre(5);

    int cavalo = 1;

    printf("Torre anda 5 casas direita: \n");

    moverTorre(5);

    printf("\nRainha anda 8 casa a esquerda: \n");

    moverRainha(8);

    printf("\nBispo anda 5 casas na diagonal pra cima a direita: \n");
    
    moverBispo(10);

    printf("\nCavalo movimenta-se em L para cima a direita: \n");

    while (cavalo--)
    {
        for (int i = 0; i < 2; i++){
            printf("Cima\n");
        }
        printf("Direita \n");
    }

    return 0;
 }