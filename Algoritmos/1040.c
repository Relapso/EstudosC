#include <stdio.h>
 
int main() {
double nota1,nota2,nota3,nota4,notaexame;
float media,mediaexame;


scanf("%lf %lf %lf %lf",&nota1,&nota2,&nota3,&nota4);

media = (nota1*2 +nota2*3 +nota3*4 +nota4*1) / 10;

printf("Media: %.1lf\n",media);


if(media >= 7){
	printf("Aluno aprovado.\n");

}
		else if(media >= 5){
		 printf("Aluno em exame.\n");
		 scanf("%lf",&notaexame);
	     printf("Nota do exame: %.1lf\n",notaexame);
		 mediaexame = (media + notaexame)/2;
			if(mediaexame >= 5){
			  printf("Aluno aprovado.\n");
			  printf("Media final: %.1lf\n",mediaexame);
			}
			    else{
			      printf("Aluno reprovado.\n");
			      printf("Media final: %.1lf\n",mediaexame);
			    }
			
		}
		
	else{
		printf("Aluno reprovado.\n");
	}



    return 0;
}