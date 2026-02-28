/**-------------------------------------------*
* -Nome: Gustavo Silva De Moura - RA:2040482522023
  -Fatec Ipiranga - Ads Vespertino 
  -PEM - Aula 3 - Dia 27/02/2025
  -Código 1: Inicialização e Percorrimento Básico*           
  *-------------------------------------------*/
#include <stdio.h>

int main () {
    int numeros [5] = {10 , 20 , 30 , 40 , 50};

    printf ("Exibindo elementos do array :\n") ;
    for(int i = 0; i < 5; i ++) {
        printf (" Indice [%d] = Valor %d\n", i , numeros [i]) ;
    }

return 0;
}