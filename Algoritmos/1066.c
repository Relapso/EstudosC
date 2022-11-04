#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int vetor[5],contpar=0,contimpar=0,contpos=0,contneg=0;
	int cont;
	
	
		for(cont=0;cont<5;cont++){
			
			scanf("%d",&vetor[cont]);
				if(vetor[cont] %2 == 0){
					contpar++;
				}
				if(vetor[cont] %2 != 0){
					contimpar++;
				}
				if(vetor[cont] < 0){
					contneg++;
				}
				if(vetor[cont] > 0){
					contpos++;
				}
		}
		
		printf("%d valor(es) par(es)\n",contpar);
		printf("%d valor(es) impar(es)\n",contimpar);
		printf("%d valor(es) positivo(s)\n",contpos);
		printf("%d valor(es) negativo(s)\n",contneg);
		
	
	return 0;
}
