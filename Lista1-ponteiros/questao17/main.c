#include <stdio.h>
#include <stdlib.h>

void somaVetores(float v1[], float v2[], float vetor_soma[], int tamanho){

    //impressão do vetor_soma
    printf("\n\nvetor3 = [ ");

    for (int i = 0; i < tamanho; i++) {
        vetor_soma[i] = v1[i]+v2[i]; // momento em que o terceiro vetor rece a soma das parcelas dos outros dois vetores
        printf(" %.2f ", vetor_soma[i]); //impressão do vetor soma
    }

    printf(" ] \n");//fim da impressão do vetor_soma
 }


int main()
{
      float *vetor1, *vetor2, *vetor3; //ponteiro para float
      int n; //número de elementos do vetor

      printf("Digite o tamanho do vetor:");
      scanf("%d", &n);

      vetor1 = (float*) malloc(n * sizeof(float)); //alocação de n posições(float) para o vetor1
      vetor2 = (float*) malloc(n * sizeof(float)); //alocação de n posições(float) para o vetor2
      vetor3 = (float*) malloc(n * sizeof(float)); //alocação de n posições(float) para o vetor2
//----------------------------------------------------------------------------
      //leitura do vetor1
      for(int i=0; i<n; i++){
             printf("Digite o valor para a posicao %d do vetor1: ", i+1);
             scanf("%f", &vetor1[i]);

      }//fim da leitura do vetor1

      //impressão do vetor1
      printf("vetor1 = [ ");

      for(int i = 0; i < n; i++){
          printf(" %.2f ", vetor1[i]);
      }

    printf(" ] \n"); //fim da impressão do vetor1
//------------------------------------------------------------------------------

    //leitura do vetor2
    for(int i=0; i<n; i++){
           printf("Digite o valor para a posicao %d do vetor2: ", i+1);
           scanf("%f", &vetor2[i]);
    }//fima da leitura do vetor2

    //impressão do vetor2
    printf("vetor2 = [ ");

    for(int i = 0; i < n; i++){
        printf(" %.2f ", vetor2[i]);
    }

    printf(" ] \n");//fim da impressão do vetor2
//------------------------------------------------------------------------------

    somaVetores(vetor1, vetor2, vetor3, n);//chamada da função que irá fazer a soma dos vetores

    free(vetor1);
    free(vetor2);
    free(vetor3);
    return 0;
}



