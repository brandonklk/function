#include<stdio.h>

int numeroDeDivisores( int valor );

main(){
	int numero       =0;
	int qtdDivisores =0;
	
	printf("Digite um numero inteiro");
	scanf("%d",&numero);
	qtdDivisores = numeroDeDivisores(numero);//ele chamou la em cima na linha 3
	printf("O numero possui %d divisores",qtdDivisores);
	
}

int numeroDeDivisores( int valor ){
	int contador = 0;
	int i;
	
	if( valor !=0 )
	{
	     for (i = 1; i <= valor; i++)
	     {
		  contador += (valor % i)==0 ? 1 : 0;
	     }
	}
	return contador;
}
