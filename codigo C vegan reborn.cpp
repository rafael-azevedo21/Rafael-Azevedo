#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	
	printf("Digite um numero de 0 a 1");
	printf("0 Para sair \n" 
			"1 para saber se o numero e par \n" 
			"2 para calcular uma potência \n" 
			"3 para ficar triste \n" 
			"4 para chorar \n" 
			"5 para abrir um sorriso \n"
			"6 para ficar perplexo \n" 
			"7para gaitar \n" 
			"8 para nao fazer nada \n"
			"9 para se lascar \n");
	scanf("%d", &num);
	
	
	while (num != 0)
	{
	

			
			switch (num)
			{
				case 1 :{
						int num2 = 0.0;
						int resto;
						printf("Digite um numero inteiro: \n");
						scanf("%f", &num2);
						resto=num2%2;
						if(resto == 0){
							printf("Esse numero e par \n");
						}else if(resto !=0)
							printf("Esse numero e impar \n");
							break;
				}
				
				case 2 :
					float numA, resultado;
					int numB;
						printf("Insira um numero de ponto flutuante: ");
						scanf("%f", &numA);
						printf("Insira um numero inteiro: ");
						scanf("%d", &numB);
						resultado = pow(numA, numB);
						printf("Valor da potência: 	%.3e", resultado );
						
						
						break;
				
				case 3 :
					float numA, resultado;
					int numB;
						printf("Insira um numero de ponto flutuante: ");
						scanf("%f", &numA);
						printf("Insira um numero inteiro: ");
						scanf("%d", &numB);
						resultado = sqrt(numA, numB);
						printf("Valor da raiz: 	%.3e", resultado );
						break;
				
				case 4 :
						int ano,bissexto;
						printf(" Digite um ano para descobrir se ele é bissexto:");
						scanf("%d", &ano);
						bissexto = ano%4
						if(bissexto=0){
							printf("O ano e bissexto");
						}
						else{
							printf("O ano não é bissexto");
						}
						break;
				
				case 5 :
						float nota1,nota2,nota3,media;
						printf ("Digite sua primeira nota");
						scanf("%f", &nota1);
						printf ("Digite sua segunda nota");
						scanf("%f", &nota2);
						printf("Digite sua terceita nota");
						scanf("%f", &nota3);
						media=(nota1+nota2+2*nota3)/4
						if(media>= 6){
							printf("Sua media e %f e voce foi aprovado", media);
						}
						else{
							printf("Sua media e %f e voce foi reprovado", media);
						}
						break;
				
				case 6 :
						float nota1, nota2, media;
						printf ("Digite sua primeira nota");
						scanf("%f")
						if(nota>=0){
							printf("Digite uma nota valida")
						}
						break;
				
				case 7 :
						printf (" KKKKKKKKKKKKKKKKKKKKKKKKKKKKKK \n");
						break;
				
				case 8 :
						printf ("\n");
						break;
				
				case 9 :
						printf ("Te lasca \n");
						break;
				
				default:
						printf("Valor Inexistente \n");
						break;
					
				
			}
		
		scanf("%d", &num);
	}
	printf("Tchau");
}
