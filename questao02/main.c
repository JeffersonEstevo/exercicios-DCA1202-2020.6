#include <stdio.h>

int main()
{
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    /*Neste caso, será impresso respectivamente:
    p -> 4049 (endereço fictício de i)
    *p+2 -> 7 (conteúdo onde p aponta + 2)
    **&p -> 5  (conteúdo que está contido na variável para onde p aponta)
    3**p -> 15 (3* conteúdo de p)
    **&p+4 -> 9  (conteúdo que está contido na variável para onde p aponta + 4)
    */
    return 0;
}
