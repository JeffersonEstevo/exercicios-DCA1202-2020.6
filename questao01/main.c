#include <stdio.h>

int main()
{
    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;

    p == &j; //testa se p(ponteiro para int) aponta para o endereço onde se encontra a variável i
    //[retorna 1 se associarmos a uma variável int]


    *p - *q; //faz a difereça entre o conteúdo onde p aponta pelo conteúdo onde q aponta (a partir do operador de desreferenciação)
    //[retorna -2 nesse caso específico]

    **&p; //faz referência ao conteúdo contido no endereço do ponteiro(p) que aponta para o endereço da variável i
    //[retorna o valor contido na variável i, nesse caso 3]

    3 - *p/(*q) + 7; //faz a divisão entre o conteúdo de p pelo conteúdo de q (*p/(*q) = 0.6 ), soma 3 e soma 7
    //[como a variável i foi declarada com int o valor 0.6 é arredondado para 0, logo na saída temos o valor 10 apresentado]

    return 0;
}
