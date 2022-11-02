#include<stdio.h>
#include<stdlib.h>

int main(){
	int lanche,quantidade;
	float total=0;
	
	scanf("%d %d",&lanche,quantidade);
	
	printf("%d",lanche);
	if(lanche == 1){
		total = 4.00 * quantidade;
		printf("Total: R$ %.2f",total);
	}
	
 	if(lanche == 2){
		total = 4.50 * quantidade;
		printf("Total: R$ %.2f",total);
	}
	
	if(lanche == 3){
		total = 5.00 * quantidade;
		printf("Total: R$ %.2f",total);
	}
	if(lanche == 4){
		total = 2.00 * quantidade;
		printf("Total: R$ %.2f",total);
	}
	if(lanche == 5){
		total = 1.50 * quantidade;
		printf("Total: R$ %.2f",total);
	}
	
}
