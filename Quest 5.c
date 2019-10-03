#include <stdio.h>
#include <string.h>

int main(void) 
{
  char texto1[100];
  char texto2[100];
  int tamanho1, tamanho2;
  int comparativo;
  printf("Digite um texto: \n");
  gets(texto1);
  tamanho1=strlen(texto1);
  printf("Agora digite outro texto \n");
  gets(texto2);
  tamanho2=strlen(texto2);
  printf("O tamanho do texto 1 é de: %d \n", tamanho1);
  printf("O tamanho do texto 2 é de: %d \n", tamanho2);
  comparativo=strcmp(texto1,texto2);
  if(comparativo>0){
    printf("O texto 1 é maior que o 2");
  }else if(comparativo<0){
    printf("O texto 2 é maior que o texto1");
  }else{
    printf("Os textos 1 e 2 tem tamanhos iguais");
  }

}
