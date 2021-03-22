#include<stdio.h>

main(){
	int i, num;
	int numpar=0;

	for(i=1;i<=2;i++){
		
		//Inserir os valores dos números inicial e final
		
		printf("Digite o %d valor: ", i);
		scanf("%d",&num);
		
		//Verificar se o número é par ou impar 
		
		if(num % 2==0){
			printf(" O numero %d e par\n", num);
			numpar=numpar+1;
		}else{
			printf(" O numero %d e impar\n", num);
		}
	}
	
		//Imprimir a quantidade de números pares inseridos
		
	printf("A quantidade de numeros pares encontrados e %d: ", numpar);
	
	return 0;
	
}

