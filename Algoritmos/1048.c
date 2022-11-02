#include <stdio.h>

int main() {
    float salariobase, salarioreajuste;



    scanf("%f",&salariobase);

    if(salariobase >= 0 && salariobase <=400) {
        salarioreajuste = salariobase*0.15;
        printf("Novo salario: %.2f\n",salariobase += salarioreajuste);
		printf("Reajuste ganho: %.2f\n",salarioreajuste);
		printf("Em percentual: 15 %%\n");
    }
    
    else if(salariobase >=400.01 && salariobase <= 800.00){
        salarioreajuste = salariobase * 0.12;
        printf("Novo salario: %.2f\n",salariobase += salarioreajuste);
		printf("Reajuste ganho: %.2f\n",salarioreajuste);
	    printf("Em percentual: 12 %%\n");
    }
        
    else if(salariobase >=800.01 && salariobase <= 1200){
        salarioreajuste = salariobase * 0.10;
        printf("Novo salario: %.2f\n",salariobase += salarioreajuste);
		printf("Reajuste ganho: %.2f\n",salarioreajuste);
		printf("Em percentual: 10 %%\n");
    }
        
    else if(salariobase >= 1200.01 && salariobase <= 2000){
        salarioreajuste = salariobase * 0.07;
        printf("Novo salario: %.2f\n",salariobase += salarioreajuste);
		printf("Reajuste ganho: %.2f\n",salarioreajuste);
		printf("Em percentual: 7 %%\n");
    }
                
    else {
    	salarioreajuste = salariobase * 0.04;
    	printf("Novo salario: %.2f\n",salariobase += salarioreajuste);
		printf("Reajuste ganho: %.2f\n",salarioreajuste);
		printf("Em percentual: 4 %%\n");
    }
                    
        

    return 0;
}

