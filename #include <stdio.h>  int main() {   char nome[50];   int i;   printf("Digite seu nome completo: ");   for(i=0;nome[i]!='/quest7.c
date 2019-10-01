#include <stdio.h>

int main()
{
  char nome[50];
  int i;
  printf("Digite seu nome completo: ");
  for(i=0;nome[i]!='/0'&& i<50;i++){
    scanf("%c",&nome[i]);
    if(nome[i]==' ')
    {
      printf("\n");
    }
    else{
      printf("%c",nome[i]);
    }
  }
}
