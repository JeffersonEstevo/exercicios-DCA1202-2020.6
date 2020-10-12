#include <stdio.h>

int main()
{
    int i = 3 , j = 5;
    int *p , *q;

    p = i; // atribuição ilegal, pois p é variável do tipo ponteiro, então só deve apontar para endereços de memória
    q = &j; //atribuição legal, pois q é tipo ponteiro e aponta para o endereço de j
    p = &*&i; // atribuição legal, pois p recebe o endereço onde está o conteúdo atribuído na variável i (mesmo endereço de i)
    i = (*&)j; //atribuição ilegal, pois os parênteses tornam a expressão incompatível
    i = *&j; //atribuição legal, agora sim será impresso o conteúdo do endereço onde está a variável j
    i = *&*&j; //atribuição legal, faz a mesma operação que a expressão acima
    q = *p;  // atribuição ilegal, q recebe o conteúdo de p normalmente, porém ponteiros só devem receber endereços de memória
    i = (*p)++ + *q; //atribuição legal, retorna o valor contdo em p + o valor contido em q

    return 0;
}
