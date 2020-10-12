#include <stdio.h>

int main()
{
    int pulo[6] = {1,2,3,4,5,6};

    *( pulo + 2); //GABARITO. Logo de cara aqui é referenciado o conteúdo do terceiro elemento do vetor pulo, nesse caso aqui o valor 3
    *( pulo + 4); //pela mesma lógica acima, é exibido o conteúdo do quinto elemento, neste caso
    int a = pulo + 4; //neste caso, a soma é de 4 posições interias de endereço de memória, pois falta o operador de desrefrenciação
    int b = pulo + 2; //neste caso, a soma é de 2 posições interias de endereço de memória, pois falta o operador de desrefrenciação

    return 0;
}
