#include <stdio.h>
#include <stdlib.h>

typedef struct _jog{
	int saq,bloq,ataq;
	int saqsus,bloqsus,ataqsus;
		
	
	
}tipoJogador;

int main(int argc, char *argv[]) {
	int qtd;
	char nome[100];
	int tsaque=0, tbloqueio=0, tataque=0;
	int ssaque=0, sbloqueio=0, sataque=0;
	tipoJogador jog;
	
	scanf("%d", &qtd);
	
	while(qtd--){
		fflush(stdin);
		scanf("%s",nome);
		scanf("%d %d %d", &jog.saq, &jog.bloq, &jog.ataq);
		scanf("%d %d %d", &jog.saqsus, &jog.bloqsus, &jog.ataqsus);
		
		tsaque += jog.saq;
		tbloqueio += jog.bloq;
		tataque += jog.ataq;
		
		ssaque += jog.saqsus;
		sbloqueio += jog.bloqsus;
		sataque += jog.ataqsus;
		
	}
	
	printf("Pontos de Saque: %.2f %%.\n",(float) (ssaque * 100) / tsaque);
	printf("Pontos de Bloqueio: %.2f %%.\n",(float) (sbloqueio * 100) / tbloqueio);
	printf("Pontos de Ataque: %.2f %%.\n",(float) (sataque * 100) / tataque);
	return 0;
}
