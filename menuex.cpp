#include <stdio.h>
#include <math.h>

int main(){
	
	int i;
	int a;
	float A;
	int x;
	int B, resultado;
	float sqrt, y;
	
	do	
	{
		printf("Digite um numero\n0 - sair\n1 - verificar par\n"
		"2 - elevado\n3 - Verificar raiz\n4 - pastel\n5 - empada\n"
		"6 - batata frita\n7 - suco\n8 - coca cola\n9 - guarana\n10 - matricula em hexadecimal\n");
		scanf("%d", &i);	
		switch(i){
			case 1:
        			printf("Digite um numero para vereficar se e par ou nao\n");
			  	scanf("%d", &a);
				if(a % 2 == 0){
				printf("este numero e par!\n");	
				}
				else{
				printf("este numero e impar!\n");
				}
				break;
			case 2:
				printf("Digite o valor de A\n");
				scanf("%f", &A);
				if(A < 0){
				printf("numero invalido\n");
				break;
				}
				printf("Digite o valor de B\n");
				scanf("%d", &B);
				if(B < 0){
				printf("numero invalido\n");
			  	break;
				}
				resultado = pow(A, B);
			  	printf("O numero em notacao cientifica fica assim: %.2e\n",resultado);
				break;
			case 3:
			  	printf("Digite o valor de x\n");
				scanf("%d", &x);
				printf("Digite o valor de y\n");
				scanf("%f", &y);
				sqrt = pow(x, 1.0/y);
			  	printf("O numero e: %.f\n", sqrt);
				break;
			case 4:
				printf("pastel muito bom!\n");
				break;
			case 5:
				printf("empada dilicioso!\n");
				break;
			case 6:
				printf("batata frita saboroso!\n");
				break;
			case 7:
				printf("suco muito bom!\n");
				break;
			case 8:
				printf("coca cola refrescante!\n");
				break;
			case 9:
				printf("guarana refrescante!\n");
				break;
			case 10:
				printf("matricula em hexadecimal\n");
				break;
			case 0:
				printf("tchau\n");
				break;
			default:
				printf("numero invalido!\n");
				break;
		}	
	}while(i != 0);	
}
