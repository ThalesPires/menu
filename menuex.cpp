#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int i;
	
	do	
	{
		printf(	"Digite um numero\n"
		      	"0 - sair\n"
		      	"1 - Verificar se um número é par\n"
			"2 - Elevar um número\n"
		      	"3 - Verificar a raiz\n"
		       	"4 - Verificar se o ano é bissexto\n"
		       	"5 - Média ponderada\n"
			"6 - Verificar número válido em média\n"
		      	"7 - Calcular número fatorial"
		      	"8 - Verificar se o número é primo\n"
		      	"9 - //\n"
		      	"10 - Matricula em hexadecimal\n");
		scanf("%d", &i);	
		switch(i){
			case 1:
				int a;
        			printf("Digite um numero para vereficar se é par ou nao\n");
			  	scanf("%d", &a);
				if(a % 2 == 0){
					printf("Este numero é par!\n");	
				}
				else{
					printf("Este numero é impar!\n");
				}
				break;
			case 2:
				float A;
				int B, resultado;
				printf("Digite o valor de A\n");
				scanf("%f", &A);
				if(A < 0){
					printf("Número invalido\n");
					break;
				}
				printf("Digite o valor de B\n");
				scanf("%d", &B);
				if(B < 0){
					printf("Número inválido\n");
			  		break;
				}
				resultado = pow(A, B);
			  	printf("O numero em notação científica é: %.2e\n",resultado);
				break;
			case 3:
				int x;
				float y, raiz;
				printf("Digite o valor de x\n");
				scanf("%d", &x);
				printf("Digite o valor de y\n");
				scanf("%f", &y);
				raiz = pow(x, 1.0/y);
			  	printf("O numero é: %.2e\n", raiz);
				break;
			case 4:
				int ano;
				printf("Digite o ano para saber se é bissexto\n");
				scanf("%d", &ano);
				if(ano % 4 == 0){
					printf("O ano é bissexto\n");
				}else{
					printf("O ano não é bissexto\n");
				}
				break;
			case 5:
				float nota1, nota2, nota3, media;
				printf("Digite a primeira nota\n");
				scanf("%f", &nota1);
				printf("Digite a segunda nota\n");
				scanf("%f", &nota2);
				printf("Digite a terceira nota\n");
				scanf("%f", &nota3);
				media = (nota1 + nota2 + (nota3 * 2)) / 3;
				printf("A média é: %.2f\n", media);
				if(media >= 6){
					printf("Você foi aprovado!\n");
				}else{
					printf("Você foi reprovado!\n");
				}
				break;
			case 6:
				float prova1, prova2, media2;
				printf("Digite a primeira nota\n");
				scanf("%f", &prova1);
				if(prova1 < 0 || prova1 > 10){
					printf("Valor inválido");
					return 0;
				}else{
					printf("Valor válido\n");
				}
				printf("Digite a segunda nota\n");
				scanf("%f", &prova2);
				if(prova2 < 0 || prova2 > 10){
					printf("Valor inválido");
					return 0;
				}else{
					printf("Valor válido\n");
				}
				media2 = (prova1 + prova2) / 2;
				printf("A média é: %.2f\n", media2);
				break;
			case 7:
				int num;
				int fat2;
				fat2 = 1;
				int fatorial;
				fatorial = 1;
				printf("Digite o número que deseja calcular o fatorial: ");
				scanf("%d", &num);
				do{
					fatorial = fatorial * fat2;
					fat2++;
				}while(fat2 <= num);
				printf("O resultado é %d\n", fatorial);
				break;
			case 8:
				int n1, n2;
				printf("Digite um numero para saber se e primo: ");
				scanf("%d", &n1);
				for(n2 = n1; n2 > 0; n2--){
					if(n1 % n2 == 0 && n1 != n2 || n1 == 1){
						printf("O numero nao e primo\n");
						break;
					}
					else if(n2 == 2){
						printf("O numero e primo\n");
						break;
					}
				}
				break;
			case 9:
				break;
			case 10:
				char nome[10];
				int hex;
				printf("Digite seu nome\n");
				scanf("%s", nome);
				printf("Número da sua matricula\n");
				scanf("%d", &hex);
				printf("Seu nome é: %s\n", nome);
				printf("Número da sua matricula em hexadecimal: %x\n", hex);
				break;
			case 0:
				printf("Tchau\n");
				break;
			default:
				printf("Número inválido!\n");
				break;
		}	
	}while(i != 0);
}
