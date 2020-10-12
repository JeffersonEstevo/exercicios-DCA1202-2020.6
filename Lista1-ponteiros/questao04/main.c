#include <stdio.h>

int main()
{

    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;
    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor); //resultado esperado, pois valor tinha o valor 10 armazenado, mas *p1 que aponta para seu endereço, alterou o valor associado  a valor
    /* (b) */
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp); // //resultado esperado, pois temp tinha o valor 26.5 armazenado, mas *p2 que aponta para seu endereço, alterou o valor associado  a temp
    /* (c) */
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux); //resultado esperado, pois p3 aponta para o índice 0 da string nome e aux recebe o conteúdo de p3 e o exibe na tela
    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux); //resultado esperado, pois p3 aponta para o índice 4 da string nome e aux recebe o conteúdo de p3 e o exibe na tela
    /* (e) */
    p3 = nome;
    printf("%c \n", *p3); //resultado esperado pois p3 quando recebe a string , aponta automaticamente para o primeiro índice dessa string
    /* (f) */
    p3 = p3 + 4;
    printf("%c \n", *p3); //resultado esperado pois p3 estava apontando para o primeiro índice da string e avançou 4 posições, chegando na posição 5 onde contém o "e"
    /* (g) */
    p3--;
    printf("%c \n", *p3); //resultado esperado, pois p3 estava na posição 5 e recebeu decremento de uma posição, chegando na posição 4 onde contém o "t"
    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade); //resultado esperado, pois idade recebe o conteúdo de p4 que aponta para a primeira posição do vetor, onde está o valor 31
    /* (i) */
    p5 = p4 + 1;
    idade = *p5;
    printf("%d \n", idade); //resultado esperado, pois idade recebe p5, que recebeu a posição de p4 e adicionou uma posição, chegando onde está o conteúdo 45 na segunda posição do vetor
    /* (j) */
    p4 = p5 + 1;
    idade = *p4;
    printf("%d \n", idade); //resultado esperado, pois idade recebe p4, que recebeu a posição anterior de p5 e adicionou uma posição, chegando na última posição do vetor, onde contém o valor 27
    /* (l) */
    p4 = p4 - 2;
    idade = *p4;
    printf("%d \n", idade); //resultado esperado, pois idade recebe a posição atual(última posição do vetor) e volta duas posições, rentornando para a primeira posição do vetor, onde contém o valor 31
    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5); //resultado esperado, pois p5 recebe o endereço da terceira(última) posição do vetor e recebe o decremento de uma posição, chegando na segunda posição do vetor, onde contém 45
    /* (n) */
    p5++;
    printf("%d \n", *p5); //resultado esperado, pois p5 recebe o incremento de mais uma posição, chegando novamente na última posição do vetor original, onde contém 27

    return 0;
}
