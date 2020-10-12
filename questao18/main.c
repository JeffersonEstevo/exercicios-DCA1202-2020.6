#include <stdio.h>
#include <stdlib.h>

//função que trata as duas matrizes e retorna a matriz resultado do produto das matrizes de entrada
float **multiplicaMatrizes (float **a, float **b, float **c, int nla, int nca, int ncb){

    float aux = 0; //variável temporária que guarda o valor atual de cada posição  da matriz de saída
    for(int i = 0; i < nla; i++) {
            for(int j = 0; j < ncb; j++) {

                c[i][j] = 0;
                for(int x = 0; x < nca; x++) {
                    aux +=  a[i][x] * b[x][j]; //cálculo do valor da posição atual da matriz de saída
                }

                c[i][j] = aux;//atribuição do valor auxiliar para sua posição  na matriz de saída
                aux = 0;
            }
        }

return c;

 }


int main(){

      float **matriz1, **matriz2, **matriz3; //ponteiro para ponteiro para float - alocação das matrizes
      int nl_matriz1, nc_matriz1, nl_matriz2, nc_matriz2, nl_matriz3, nc_matriz3; //número de linhas e colunas de cada matriz vetor

      printf("****************Programa para calcular produto matrizes*********************\n\n");

      printf("Digite o numero de linhas da matriz A: ");
      scanf("%d", &nl_matriz1);

      printf("\nDigite o numero de colunas da matriz A = numero de linhas da matriz B: ");
      scanf("%d", &nc_matriz1);
      nl_matriz2 = nc_matriz1;

      printf("\nDigite o numero de colunas da matriz B: ");
      scanf("%d", &nc_matriz2);

      nl_matriz3 = nl_matriz1;
      nc_matriz3 = nc_matriz2;

      matriz1 =  malloc(nl_matriz1  * sizeof(float*)); //alocação do bloco auxiliar(float) para matriz1
      matriz2 =  malloc(nl_matriz2  * sizeof(float*)); //alocação do bloco auxiliar(float) para matriz2
      matriz3 =  malloc(nl_matriz3  * sizeof(float*)); //alocação do bloco auxiliar(float) para matriz3

      matriz1[0] = malloc(nl_matriz1 * nc_matriz1 * sizeof(float)); //alocação do tamanho total da matriz A
      matriz2[0] = malloc(nl_matriz2 * nc_matriz2 * sizeof(float)); //alocação do tamanho total da matriz B
      matriz3[0] = malloc(nl_matriz3 * nc_matriz3 * sizeof(float)); //alocação do tamanho total da matriz C

      for(int i=1; i< nl_matriz1; i++){
          matriz1[i] = matriz1[i-1]+nc_matriz1; //fixação dos ponteiros a partir da segunda coluna, pois a primeira
                                                //já se encontra fixada
      }

      for(int i=1; i< nl_matriz2; i++){
          matriz2[i] = matriz2[i-1]+nc_matriz2;//fixação dos ponteiros a partir da segunda coluna, pois a primeira
      }                                         //já se encontra fixada

      for(int i=1; i< nl_matriz3; i++){
          matriz3[i] = matriz3[i-1]+nc_matriz3;//fixação dos ponteiros a partir da segunda coluna, pois a primeira
      }                                        //já se encontra fixada
//----------------------------------------------------------------------------

      //leitura da matriz1
      printf("\nDigite os valores da matriz A: ");
      for(int i=0; i<nl_matriz1; i++){

           for(int j=0; j<nc_matriz1; j++){
               scanf("%f", &matriz1[i][j]);
           }

      }//fim da leitura da matriz1


//------------------------------------------------------------------------------

      //leitura da matriz2
      printf("\nDigite os valores da matriz B: ");
      for(int i=0; i<nl_matriz2; i++){

           for(int j=0; j<nc_matriz2; j++){
               scanf("%f", &matriz2[i][j]);
           }

      }//fim da leitura da matriz2

//------------------------------------------------------------------------------

    //chamada da função que faz o cálculo da matriz de saída
    matriz3 = multiplicaMatrizes(matriz1, matriz2, matriz3, nl_matriz1, nc_matriz1, nc_matriz2);//chamada da função que irá fazer a soma dos vetores


   //impressão da matriz1
   printf("\nA = [ ");

   for(int i=0; i<nl_matriz1; i++){

        for(int j=0; j<nc_matriz1; j++){
            printf(" %0.2f ", matriz1[i][j]);// impressão do valor na posição atual
            if(i==nl_matriz1-1 && j==nc_matriz1-1) printf(" ]");// para impressão do colchete ao final da matriz
        }

        printf("\n      ");

   }//fim da matriz1

   printf("\n * \n\n");



   //impressão da matriz2
   printf("B = [ ");

   for(int i=0; i<nl_matriz2; i++){

        for(int j=0; j<nc_matriz2; j++){
            printf(" %0.2f ", matriz2[i][j]);// impressão do valor na posição atual
            if(i==nl_matriz2-1 && j==nc_matriz2-1) printf(" ]");// para impressão do colchete ao final da matriz
        }

        printf("\n       ");

   }//fim da matriz2

   printf("\n = \n\n");


   //impressão da matriz3
   printf("C = [ ");

   for(int i=0; i<nl_matriz3; i++){

        for(int j=0; j<nc_matriz3; j++){
            printf(" %0.2f ", matriz3[i][j]);// impressão do valor na posição atual
            if(i==nl_matriz3-1 && j==nc_matriz3-1) printf(" ]");// para impressão do colchete ao final da matriz
        }

        printf("\n      ");

   }//fim da matriz3

   //liberação dos blocos de memória totais das matrizes, que foram alocados depois
   //portanto devem ser liberados primeiro
   free(matriz1[0]);
   free(matriz2[0]);
   free(matriz3[0]);

   //liberação dos blocos auxiliares das matrizes, que forams alocados antes
   //portanto devem ser liberados depois
   free(matriz1);
   free(matriz2);
   free(matriz3);
   return 0;
}


