#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int qtd,prod,prod_quantidade,i;
	double soma = 0;
	
	
	scanf("%d",&qtd);
	
	for (i = 1; i<=qtd; i++){
		scanf("%d %d",&prod, &prod_quantidade);
		if(prod == 1001){
			;
			soma += prod_quantidade * 1.50;
		}
		else if(prod == 1002){
		soma += prod_quantidade * 2.50;
		}
		else if(prod == 1003){
		soma += prod_quantidade * 3.50;
		}
		else if(prod == 1004){
		soma += prod_quantidade * 4.50;
		}
		else if(prod == 1005){
		soma += prod_quantidade * 5.50;
		}
	}
	printf("%lf",soma);
	
	
	
	return 0;
}