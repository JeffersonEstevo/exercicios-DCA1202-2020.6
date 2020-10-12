#include <stdio.h>

int main()
{
   char x[4];
   printf("char: %d \n", &x); //posição na memória do primeiro elemento de x
   printf("char: %d \n", x + 1); //como o tipo do vetor é char, irá adicionar 1 unidade ao endereço inicial de x
   printf("char: %d \n", x + 2); //irá adicionar 2 unidades ao endereço da primeira posição do vetor x
   printf("char: %d \n\n", x + 3); //irá adicionar 3 unidades ao endereço da primeira posição do vetor x

   int y[4]; //OBS.: Nesta máquina que estou usando, int ocupa 4bytes
   printf("int: %d \n", &y); //posição na memória do primeiro elemento de y
   printf("int: %d \n", y + 1); //como o tipo do vetor é int, irá adicionar 4 unidades ao endereço inicial de y
   printf("int: %d \n", y + 2); //irá adicionar 8 unidades ao endereço da primeira posição do vetor y
   printf("int: %d \n\n", y + 3); //irá adicionar 12 unidades ao endereço da primeira posição do vetor y

   float z[4];
   printf("float: %d \n", &z); //posição na memória do primeiro elemento de z
   printf("float: %d \n", z + 1); //como o tipo do vetor é float, irá adicionar 4 unidades ao endereço inicial de z
   printf("float: %d \n", z + 2); //irá adicionar 8 unidades ao endereço da primeira posição do vetor z
   printf("float: %d \n\n", z + 3); //irá adicionar 12 unidades ao endereço da primeira posição do vetor z

   double w[4];
   printf("double: %d \n", &w); //posição na memória do primeiro elemento de w
   printf("double: %d \n", w + 1); //como o tipo do vetor é double, irá adicionar 8 unidades ao endereço inicial de w
   printf("double: %d \n", w + 2); //irá adicionar 16 unidades ao endereço da primeira posição do vetor w
   printf("double: %d \n\n", w + 3); //irá adicionar 24 unidades ao endereço da primeira posição do vetor w
    return 0;
}
