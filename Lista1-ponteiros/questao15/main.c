#include <stdio.h>

int ordenarDado(const void *Vetor[], int n , int x, const void (*ponteiro)(const void * a, const void * b)){
  //  return ( *(int*)x - *(int*)y );

}


int troca(const void * a, const void * b){
  return ( *(int*)a - *(int*)b );
}
int main()
{
/*
Utilize a ideia do ponteiro para função pela função qsort() para implementar sua própria função
de ordenação. Para isso, sua função deverá receber, entre outros argumentos, um ponteiro para
a função de comparação.
*/

        const void *vetor; //ponteiro para void
        int n; //número de elementos do vetor

        printf("Digite o numero de posicoes do vetor:");
        scanf("%d", &n);

        vetor = (void*) malloc(n * sizeof(void)); //alocação de n posições(float) para o vetor

        for(int i=0; i<n; i++){
            printf("Digite o valor para a posicao %d do vetor: ", i+1);
            scanf("%f", &vetor[i]);
        }

          qsort (vetor, n, sizeof(float), troca);


}
