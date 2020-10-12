#include <stdio.h>

int main()
{
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){


    printf("\ni = %d",i); //exibe apenas o valor do contador no momento do loop de execução [0-4]

    printf(" vet[%d] = %.1f",i, vet[i]); //exibe a posição atual, e o valor da posição

    printf(" *(f + %d) = %.1f",i, *(f+i));//imprime o conteúdo do vetor na posição i atual e atribui o valor de f dinamicamente, pois f inicialmente
                                        //aponta para a primeira posição do vetor vet e em tempo de execução é adicionada a proxima posição do vetor
                                        //a partir da operação *(f+i)

    printf(" &vet[%d] = %X",i, &vet[i]); //exibe a posição atual e o endereço de memória que a posição atual do vetor ocupa

    printf("( f + %d) = %X",i, f+i); //imprime a posição de memória ocupada pela posição atual do vetor, contado de forma dinâmica a partir da operação f+i

    }
    printf("\n");
    return 0;
}
