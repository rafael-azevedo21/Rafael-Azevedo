#include <stdio.h>

int main()
{
	int mat[3][4];
	int i;
	int j;
	int cont5;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("Digite um n�mero para ser armazenado no espa�o [%d] [%d] \t", i,j);
			scanf("%d", &mat[i][j]);
			printf("\n");
			if(mat[i][j]==5){
				cont5++;
			}
		}
	}
		for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf(" %d ", mat[i][j]);
			if (j<3){
				printf("-");
			}			
			if (j==3){
				printf("\n");
			}
		}
	}
	printf("O n�mero 5 foi digitado %d vezes", cont5);
}
