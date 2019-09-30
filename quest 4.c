#include <stdio.h>

int main(void) 
{
  char texto[100];
  int i;
  int cont=0;
  gets(texto);
  printf(" Normal: %s \n", texto);
  printf("Em ordem crescente: \n");
  for(i=0;texto[i]!='\0'&&i<sizeof(texto);i++){
    printf("%c \n",texto[i]);
    cont++;
  }
  printf("Em ordem decrescente");
  for(i=cont;i>=0;i--){
    printf("%c \n", texto[i]);
  }

}
