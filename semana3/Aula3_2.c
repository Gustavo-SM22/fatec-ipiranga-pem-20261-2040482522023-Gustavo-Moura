/**-------------------------------------------*
* -Nome: Gustavo Silva De Moura - RA:2040482522023
  -Fatec Ipiranga - Ads Vespertino 
  -PEM - Aula 3 - Dia 27/02/2025
  -Código 2: Operações Aritméticas em Arrays*           
  *-------------------------------------------*/
#include <stdio.h>

int main () {
    float notas [4] = {7.5 , 8.0 , 6.5 , 9.0};
    float soma = 0 , media ;

    for(int i = 0; i < 4; i ++) {
        soma += notas [ i ];
    }

    media = soma / 4;
    printf ("A media das notas e: %.2f\n", media);

return 0;
}
