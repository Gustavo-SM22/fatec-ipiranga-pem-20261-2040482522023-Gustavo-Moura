/**-------------------------------------------*
* -Nome: Gustavo Silva De Moura - RA:2040482522023
  -Fatec Ipiranga - Ads Vespertino 
  -PEM - Aula 3 - Dia 27/02/2025
  -Código 3: Busca de Elementos (Algoritmo de Pesquisa)*           
  *-------------------------------------------*/
#include <stdio.h>

int main() {
    int valores [6] = {12 , 45 , 78 , 23 , 56 , 89};
    int busca , encontrado = 0;

    printf ("Digite um valor para buscar no sistema: ") ;
    scanf ("%d", & busca ) ;

    for(int i = 0; i < 6; i ++) {
        if(valores [ i ] == busca ) {
            printf ("Valor %d encontrado na posicao %d.\n", busca,i);
            encontrado = 1;
            break ;
        }
    }
    if (!encontrado )
        printf ("Valor nao localizado.\n") ;

return 0;
}