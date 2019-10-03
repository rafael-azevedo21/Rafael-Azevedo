#include <stdio.h>

int main(void) 
{
  int num[10];
  int i;
  int cont3=0;

  for(i=0;i<10;i++){
    printf("digite um número: ");
    scanf("%d",&num[i]);
    if(num[i]==3){
      cont3 ++;
    }
  }
  printf("A quantidade que o número 3 apareceu no vetor foi: %d", cont3);

}
