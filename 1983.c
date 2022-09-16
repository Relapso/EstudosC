#include <stdio.h>

int main(int argc, const char * argv[]) {
    int numero_alunos,numero_matricula, matricula_maior;
    float nota_aluno, nota_maior;
    
    
    nota_maior = 0;
    scanf("%d",&numero_alunos);
    while(numero_alunos--){
        scanf("%d %f",&numero_matricula,&nota_aluno);
        if(nota_aluno > nota_maior){
            nota_maior = nota_aluno;
            matricula_maior = numero_matricula;
        }
    }
    
    if(nota_maior >=8)
        printf("%d\n",matricula_maior);
    else
        printf("Minimum note not reached");
        
    
    
    
    return 0;
}
