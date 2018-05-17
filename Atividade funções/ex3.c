#include <stdio.h>

int menorNum(int n1, int n2, int n3);

main(){
	
	int num1 = 4, num2 = 6, num3 = 2;
	int menor = menorNum(num1,num2,num3);
		
		printf("O menor numero existente entre os %d, %d, %d e: %d", num1,num2,num3, menor);
	
}

int menorNum(int n1, int n2, int n3){
	
		if((n1 < n2) || (n1 < n3))
			return n1;
		if((n2 < n1) || (n2 < n3))
			return n2;
		return n3;
}
