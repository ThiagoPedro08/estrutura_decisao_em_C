#include <stdio.h>
#include <stdlib.h>


int main(){
	
    int opr, n1, n2, resultado, soma;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("Digite um numero: ");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	
	printf("\nSoma dos numeros indicados: %d", soma);
	
	printf("\n\nEscolha a operacao: \n\n\t 1 - Soma \n\t 2 - Subtracao \n\t 3 - Multiplicacao \n\t 4 - Divisao \n");
	scanf("%d", &opr);
	
	if (opr == 1){
		resultado = n1 + n2;
		printf("\tA soma e: %d\n\n", resultado);
	}
	
	else{
		if (opr == 2){
			resultado = n1 - n2;
			printf("\tA subtracao e: %d\n\n", resultado);
		}
		
		else{ 
		    if (opr == 3){
			   resultado = n1 * n2;
			   printf("\tA multiplicacao e: %d\n\n", resultado);
		    }
		    
		    else{
		    	if (opr == 4){
		    		resultado = n1 / n2;
		    	    printf("\tA divisao e: %d\n\n", resultado);
				}
				
				else{
					printf("\tDigite um numero valido!\n\n\a");
				}
			}
	    }	   
	}

	system("pause");
}
