#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int C;
FILE *IN;
FILE *OUT;

unsigned short int T[43][43]; //33 para cada letra do alfabeto + 10 para numeros
//Alfabeto: https://en.wikipedia.org/wiki/Russian_alphabet

//Chamada: Cript.exe [Numero de cifra] [Codigo de cifra] [Arquivo de entrada] [Arquivo de saida]
int main(int argc, char *argv[]){
  double A;
  /*if (argc != 5){
    printf ("Erro, quantidade de argumentos invalida");
    return 1;
  }*/
  C = atoi(argv[1]);
  /*IN = fopen(argv[2], "r");
  OUT = fopen(argv[3], "r");
  if (IN == NULL){
      printf("Erro, Arquivo de Entrada");
      return 1;
  }
  if (OUT == NULL){
      printf("Erro, Arquivo de Saida");
      return 1;
  }*/
  srand(C);
  A = rand();
  printf ("-%lf-", A);
  return 0;
}
