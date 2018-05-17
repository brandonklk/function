#include <stdio.h>

int somaDosNumeros(int x, int a);

main(){
	
	int soma1 = 0,
		soma2 = 0,
		somaDeTodos;
	
		printf("Digite um numero inteiro: ");
		scanf("%d", &soma1);
		
		printf("Digite um segundo numero inteiro: ");
		scanf("%d", &soma2);
		
		somaDeTodos = somaDosNumeros(soma1, soma2);
	
		printf("O resultado da soma dos dois numeros e: %d", somaDeTodos);
		
		return 0;
}

int somaDosNumeros(int x, int a){
	
	int result;
		
		result = x + a;
		
	return result;
}
