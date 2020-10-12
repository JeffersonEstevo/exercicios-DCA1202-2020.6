#include <stdio.h>
//#include <stdlib.h>

void imprimeVetor(float *v, int n) {

    //algoritmo Bubblesort de ordenação
    for (int i = 1; i < n; i++) { //percorre o vetor até o valor n passado pelo usuário, ordenando quantas vezes forem necessárias
       for (int j = 0; j < n - 1; j++) { //comparação do valor atual com seu sucessor, para todas as posições
         if (v[j] > v[j + 1]) { //se valor atual for maior queo próximo valor do vetor é feita a troca
           float aux;
           aux = v[j];  //variável auxiliar recebe o valor atual
           v[j] = v[j + 1]; //valor atual recebe o próximo
           v[j + 1] = aux; //próximo valor recebe valor atual(que está armazenado em aux)
         }
       }
     }

       //impressão do vetor ordenado, após ordenação feita acima
       printf("vetor ordenado = [ ");
       for(int i = 0; i < n; i++){
           printf(" %.2f ", v[i]);
       }
       printf(" ] \n");

}


int main() {
    float *vetor; //ponteiro para float
    int n; //número de elementos do vetor

    printf("Digite o tamanho do vetor:");
    scanf("%d", &n);

    vetor = (float*) malloc(n * sizeof(float)); //alocação de n posições(float) para o vetor

    for(int i=0; i<n; i++){
        printf("Digite o valor para a posicao %d do vetor: ", i+1);
        scanf("%f", &vetor[i]);
    }

    imprimeVetor(vetor, n); //chamada da função que faz a troca e exibe em tela o vetor ordenado

    free(vetor);  //liberação de blocos de memórias alocados dinamicamente (OBRIGATÓRIO)!
    return 0;
}
