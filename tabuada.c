//Código para escolher um valor a ser calculado para a tabuada.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]){
	//Variáveis inteiras, com valor inicial de 0.
	int resultado = 0; //Resultado é uma variável que já vai receber a multiplicação e apenas ser mostrado no final. 
	int n = 0;

	printf("Digite o valor para a tabuada:");
	scanf("%d", &n);

	for(int i = 0; i <=10; i++){ //Somando o valor de i até 10 (máximo da tabuada).
		resultado = n * i;
		printf("%d x %d = %d\n", n, i, resultado); //Atribuição das variáveis aos seus respectivos valores tipados.
	}
	return 0;
}