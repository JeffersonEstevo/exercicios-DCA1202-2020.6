#include <stdio.h>

int main()
{
    int mat[4]={1,2,3,4}, *p, x;

    p = mat + 1; // operação válida, ela aponta para a segunda posição do vetor mat

   // p = mat++; // operação inválida, nesse caso tenta-se aumentar o tamanho do vetor mat, porém vetores
                 // têm um tamanho já definido quando foi declarado, não é possível aumentar o tamanho do vetor dessa forma

    //p = ++mat; //operação inválida, nesse caso tenta-se fazer um pré incremento no vetor mat, pelo mesmo motivo anterior, isso não é possível

    x = (*mat)++; //operação válida, nesse caso estamos referênciando o conteúdo de mat(primeira posição) e pulando para a próxima posição(2)
    //OBS.: COMO FOI FEITO UM PÓS INCREMEMNTO AINDA NÃO É POSSÍVEL IMPRIMIR O CONTEÚDO DA SEGUNDA POSIÇÃO EM TELA.
    //CASE QUEIRAMOS IMPRIMIR O CONTEÚDO DA SEGUNDA POSIÇÃO PARA FIM DE TESTE, PODEMOS FAZER UM PRÉ INCREMENTO, ASSIM:

    x = ++(*mat);
    printf("%d \n", x);


    return 0;
}
