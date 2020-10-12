#include <stdio.h>

int main()
{
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;
    aloha[2] = value; //comando válido, pois aloha é um vetor de float e value é variável float com valor 2.2 atribuído

    scanf("%f", &aloha); //a linguagem não apresenta erro. Porém, não serve de nada fazer isso, pois estamos lendo um endereço de memória(valor int)
                         //comando válido, porém sem sentido de utilização

    aloha = "value"; //comando inválido, dá erro pois "value" é vetor de caracteres, logo não podmos atribuí-lo ao vetor de aloha

    printf("%f", aloha); //comando válido, mostra o primeiro valor do vetor aloha

    coisas[4][4] = aloha[3]; //comando legal, estamos atribuindo o valor de uma posição de aloha(float) para uma posição válida do vetor coisas(float)
                             //porém ainda não há nenhum valor atribuído a aloha[3] ainda

    coisas[5] = aloha; //comando inválido, pois coisas é uma "matriz" e é obrigatório passar posição da linha e da coluna para que seja possível atribuir valor

    pf = value; //comando inválido, pois pf é ponteiro para float, só deve receber posição de memória e não valor diretamente

    pf = aloha; //comando válido, pois quando um ponteiro recebe um vetor diretamente, ele guarda  a primeira posição de memória do vetor em questão

    return 0;
}
