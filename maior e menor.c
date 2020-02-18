#include <stdio.h>

int main(){
	int i, vetor[5],auxiliar=0, maior, menor;
	printf("Digite 5 valores que serão armazenados no vetor \n");
	for(i=0;i<5;i++){
		scanf("%d", &vetor[i]);
	}
	for(i=0;i<5;i++){
		if(vetor[i]>auxiliar){
			auxiliar=vetor[i];
		}
	}
	maior=auxiliar;
	for(i=0;i<5;i++){
		if(auxiliar>vetor[i]){
			auxiliar=vetor[i];
		}
	}
	menor=auxiliar;
	printf("O maior e menor valor, respectivamente, são: %d e %d",maior, menor);
}
