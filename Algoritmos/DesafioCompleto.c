#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define TAM 10000 //constante para tamanho do vetor

void bubbleSort (int v[TAM]) {
    int a, b, aux;
    
    for (a=TAM-1; a>=1; a--) {
        for (b=0; b<a; b++) {
            if (v[b]>v[b+1]) {
                aux = v[b];
                v[b] = v[b+1];
                v[b+1] = aux;
            }
        }
    }
}



void selectSort (int v[TAM]) {
	int menor, aux, i, j;
	
		for (i = 0; i < TAM-1; i++) {
		menor = i;
			for (j = i+1; j < TAM; j++)
				if (v[j] < v[menor])
				menor = j;
				
					if (menor != i) {
					aux = v[i];
					v[i] = v[menor];
					v[menor] = aux;
					}
		}	
}	

void insertSort (int v[TAM]) {
	int i, j, aux;
		for (i = 1; i < TAM; i++) {
		aux = v[i];
		j = i - 1;
		while((j >= 0) && (aux < v[j])){
			v[j+1] = v[j];
			j--;
		}
		v[j+1] = aux;
	}
}




int main(){
 clock_t t; //variável para armazenar tempo
 int vetor[TAM]; //vetor com 10000 posições
 int p, r, a,i;
 p = 0;
 r = TAM;

  //geração aleatório dos valores do vetor
 for(a = 0; a < TAM; a++)
  vetor[a] = rand();
  //
  
  
  for(i=0; i< TAM; i++)
  printf("%d ",vetor[i]);
  printf("\n");

 //bubblesort
 t = clock(); //armazena tempo
 bubbleSort(vetor);
 t = clock() - t; //tempo final - tempo inicial
 printf("Tempo de execucao do bubblesort: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000))); 
 
 	//selectsort
 	t = clock(); //armazena tempo
 	selectSort(vetor);
 	t = clock() - t;
 	printf("Tempo de execucao do selectsort: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000))); 
 
		//insertSort
		t = clock(); //armazena tempo
 		insertSort(vetor);
 		t = clock() - t;
 		printf("Tempo de execucao do insertsort: %lf\n", ((double)t)/((CLOCKS_PER_SEC/1000))); 
		
 return 0;
}
