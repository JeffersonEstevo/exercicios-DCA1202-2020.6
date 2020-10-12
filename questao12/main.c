#include <stdio.h>
#include <stdlib.h> /*caso for usar qsort*/

//função operação que recebe como parâmetro um ponteiro para uma função e dois inteiros para realizar certa operação
int operacao( int (*ponteiro)(int, int), int x, int y){
    return ponteiro(x,y);
}
//operação de teste de qual é o maior valor
int maior(int a, int b){return (a > b) ? a : b;}
//operação de adição entre os dois valores
int soma(int a, int b){return a + b;}


int main(){   
   //Ponteiros para funções são utilizados para guardar o endereço de memória onde detereminada função está alocada.
    
   //É útil para trabalharmos por exemplo com ordenação de dados(exemplo mas usual da linguagem c)
    
   /*
     Exemplo de utilidade: poderíamos por exemplo criar uma função que ordene inteiros, caso seja necessário ordenar outros tipos
     teríamos que reimplementar a função ordenando o tipo específico
    */
    
    //assinatura: a assinatura de ponteiro para função deve obedecer a seguinte escrita:
        // tipo_retornado ( *nome_ponteiro )( lista_de_tipos );    
        //OBS.: O nome do ponteiro deve ser envolvido pelos parênteses OBRIGATORIAMENTE.
        //Caso não se utilize parênteses no nome do ponteiro o compilador irá interpretar a assinatura com sendo uma função que retorna um ponteiro 

    int x,y;
    printf("Digite 2 numeros: ");
    scanf("%d %d", &x, &y);

    printf("Maior: %d", operacao( maior, x, y )); //chamada da função operação passando a função  maior como parâmetro
    printf("\n");
    printf("Soma: %d", operacao( soma, x, y )); //chamada da função operação passando a função soma como parâmetro
    printf("\n");
    printf("\n");

    return 0;
}
