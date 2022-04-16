#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[]){

	float valor1, valor2, resultado; //"Float" serve para variáveis do tipo real.
	char operador[30];

	printf("Digite o primeiro valor:");
	scanf("%f", &valor1); //"%f" serve para valores do tipo float.

	printf("Digite o operador:");
	scanf("%s", &operador); //usar "&" para operadores.

	printf("Digite o segundo valor:");
	scanf("%f", &valor2);

	if(operador == '+'){ //Necessário uso de aspas simples para operadores.
		resultado = valor1 + valor2;
	}
	if(operador == '-'){
		resultado = valor1 - valor2;
	}
	if(operador == '*'){
		resultado = valor1 * valor2;
	}
	if(operador == '/'){
		resultado = valor1 / valor2;
	}
	printf("%f", resultado);


	return 0;
}