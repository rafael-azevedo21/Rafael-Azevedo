#include <stdio.h>
int main(){
	int i;
	unsigned long long num=1;
	unsigned long long total=1;
	printf("Na casa 1, tem 1 grão e 1 somado \n");
	for(i=2;i<=64;i++){
		num=num*2;
		total=total+num; 
		printf("Na casa %d, tem %llu grãos e %llu somados \n",i,num,total);
	}
}
