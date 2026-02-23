/**-------------------------------------------*
* -Nome: Gustavo Silva De Moura - RA:2040482522023
  -Fatec Ipiranga - Ads Vespertino 
  -Atividade PEM - Aula 1 - Dia 13/02/2025
  -Objetivo: Exemplo dedeclaração de Vetor  *           
  *-------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
void main(){
int vetor[] = {1,2,3,4,5}; //declaração do vetor
int n2;
printf("sizeof1: %d\n", sizeof(vetor));
  printf("sizeof2: %d\n", sizeof(int));
n2 = sizeof(vetor)/sizeof(int);
 
    
    printf("TAMANHO = %d\n\n",n2);
   printf("======================\n");
  int acumulador=0;
  for (int i=0;i<n2;i++){
      acumulador = vetor[i]+acumulador;
     printf("Contador parcial... %d\n",acumulador);
  }
  printf("======================\n");
  printf("Soma total: %d\n",acumulador);

}