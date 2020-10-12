#include <stdio.h>
#include <stdlib.h> //para usar a função qsort();

int troca(const void * a, const void * b){ //declaração da função que ordena
  return ( *(int*)a - *(int*)b ); //converte ponteiro para void que foi recebido acima, converte para ponteiro para int para fazer a comparação
                                      //e faz a diferença entre os valores para saber se vai trocar a posição deles
                                      //se o valor da expressão for positivo, a função qsort se encarrega de trocar os valores de posição
}

int main() {

    float *vetor; //ponteiro para float
    int n; //número de elementos do vetor

    printf("Digite o numero de pósicoes do vetor:");
    scanf("%d", &n);

    vetor = (float*) malloc(n * sizeof(float)); //alocação de n posições(float) para o vetor

    for(int i=0; i<n; i++){
        printf("Digite o valor para a posicao %d do vetor: ", i+1);
        scanf("%f", &vetor[i]);
    }

      qsort (vetor, n, sizeof(float), troca);// chamada da função q sort, recebe:
                                                //o vetor de float(vetor)
                                                //o número de elementos do vetor(n)
                                                //tamanho de cada dado por posição( sizeof(float) ), para poder fazer a troca
                                                //função que faz a troca propriamente dita

      //Impressão do vetor ordenado, depois dos testes
      printf("Vetor ordenado =  [ ");
      for (int i=0; i<n; i++){
         printf ("%.2f ", vetor[i]);
      }
      printf(" ] \n");

      free(vetor);  //liberação de blocos de memórias alocados dinamicamente (OBRIGATÓRIO)!
      return 0;
}
