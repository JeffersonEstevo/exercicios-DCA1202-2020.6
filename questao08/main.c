#include <stdio.h>

//Função imprime os 3 conteúdos armazenados no vetor vet, através da operação *(vet + i)
int main(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
    printf("%d \n",*(vet+i));
    }
    secundaria();
}

//Função imprime os 3 endereços de memória armazenados no vetor vet, através da operação (vet + i)
int secundaria(){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
    printf("%X \n",vet+i);
    }
}
