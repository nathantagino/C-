#include <stdio.h>
#include <stdlib.h>
#include <cmath> // usado para poder usar potencia
#include <string.h> // usado para a funcao concatenacao
#include <ctype.h> // usado para a funcao toupper
#include <Windows.h>
void tabela(){
	printf("-------------------------------------------------------------------------------|\n");
    printf("|                               .::Tabela de Resistores::.                     |\n");
    printf("-------------------------------------------------------------------------------|\n");
    printf("|    cor     | 1 faixa | 2 faixa | 3 faixa  | Multiplicador |  toler%cncia      |\n", 131);
    printf("-------------------------------------------------------------------------------|\n");
    printf("| Preto(P)   |    0    |    0    |    0     |       0       |                  |\n");
    printf("-------------------------------------------------------------------------------|\n");
    printf("| Marrom(M)  |    1    |    1    |    1     |       1       |     1%%           |\n");
    printf("-------------------------------------------------------------------------------|\n");
    printf("| Vermelho(V)|    2    |    2    |    2     |       2       |     2%%           |\n");
    printf("-------------------------------------------------------------------------------|\n");
    printf("| Laranja(L) |    3    |    3    |    3     |       3       |                  |\n");
    printf("-------------------------------------------------------------------------------|\n");
    printf("| Amarelo(A) |    4    |    4    |    4     |       4       |                  |\n");
    printf("-------------------------------------------------------------------------------|\n");
   	printf("| Verde(G)   |    5    |    5    |    5     |       5       |     0,5%%         |\n");
    printf("-------------------------------------------------------------------------------|\n");
   	printf("| Azul(B)    |    6    |    6    |    6     |       6       |     0,25%%        |\n");
    printf("-------------------------------------------------------------------------------|\n");
    printf("| Violeta(R) |    7    |    7    |    7     |       7       |     0,10%%        |\n");
    printf("-------------------------------------------------------------------------------|\n");
   	printf("| Cinza(C)   |    8    |    8    |    8     |       8       |     0,05%%        |\n");
    printf("-------------------------------------------------------------------------------|\n");
    printf("| Branco(W)  |    9    |    9    |    9     |       9       |                  |\n");
    printf("-------------------------------------------------------------------------------|\n");
    printf("| Dourado(D) |         |         |          |      x0,1     |      5%%          |\n");
    printf("-------------------------------------------------------------------------------|\n");
    printf("| Prata(X)   |         |         |          |      x0,01    |      10%%         |\n");
    printf("-------------------------------------------------------------------------------|\n");
}
//********************************************************************************************//
//Funcao faixaResistores: atribui um valor numerico para uma cor digitada pelo usuario//
		int faixaResistores(char corFaixa){
		int valorFaixa;
		switch(corFaixa){
			case 'P': //preto//
			valorFaixa=0;
			break;	
			case 'M': //marrom//
			valorFaixa=1;
			break;	
			case 'V': //vermelho//
			valorFaixa=2;
			break;		
			case 'L': //laranja//
			valorFaixa=3;
			break;	
			case 'A': //amarelo//
			valorFaixa=4;
			break;
			case 'G': //verde//
			valorFaixa=5;
			break;	
			case 'B': //azul//
			valorFaixa=6;
			break;
			case 'N': //violeta//
			valorFaixa=7;
			break;
			case 'C': //cinza//	
			valorFaixa=8;
			break;
			case 'W': //branco//
			valorFaixa=9;
			break;	
			default:
			printf ("              ERRO 01: Valor n%co corresponde a uma faixa de cor v%clida \n", 199,160);	
			valorFaixa=99;
									
		}
			return valorFaixa;		
		}
//********************************************************************************************//	
		//Funcao toleranciaResistores: atribui um valor numerico para uma cor digitada pelo usuario para a tolerancia//
		float toleranciaResistores(char corFaixa){
		float tolerancia;
		switch(corFaixa){
			case 'M': //marrom//
			tolerancia=0.01;
			break;
			case 'V': //vermelho//
			tolerancia=0.02;
			break;
			case 'G': //verde//
			tolerancia=0.005;
			break; 
			case 'B': //azul//
			tolerancia=0.0025;
			break;
			case 'R': //violeta//	
			tolerancia=0.001;
			break;
			case 'C': //cinza//
			tolerancia=0.0005;
			break;	
			case 'D': //dourado//
			tolerancia=0.05;
			break;
			case 'X': //prata//
			tolerancia=0.1;
			break;	
			default:
			printf ("            ERRO 02: Valor n%co corresponde a uma toler%cncia v%clida \n",199,131,160); 
			tolerancia = 99;								
		}
		return tolerancia;		
		}
//********************************************************************************************//
		//Funcoes de concactenaco: transformam os valores digitados em um valor unico concatenado
		int concatenaDois(int f1, int f2){
	    char s1[20]; // convertendo inteiros em string
	    char s2[20]; // convertendo inteiros em string
	    sprintf(s1, "%d", f1); // concatenando as strings
	    sprintf(s2, "%d", f2); // concatenando as strings
	    strcat(s1, s2);  //convertendo a soma dos pares em uma variavel do tipo inteiro 
	    int c3 = atoi(s1); // retorna o resultado, do tipo inteiro
	    return c3;
		}
//********************************************************************************************//
		//Funcoes de concactenacao: transformam os valores digitados em um valor unico concatenado
		int concatenaTres(int f1, int f2,int f3){
	    char s1[20]; // cria uma variavel do tipo char, de tamanho 20 para armazenar o valor 
	    char s2[20]; // cria uma variavel do tipo char, de tamanho 20 para armazenar o valor 
	    char s3[20]; // cria uma variavel do tipo char, de tamanho 20 para armazenar o valor 
	    sprintf(s1, "%d", f1); // convertendo inteiros em string
	    sprintf(s2, "%d", f2); // convertendo inteiros em string
	    sprintf(s3, "%d", f3); // convertendo inteiros em string
	    strcat(s1, s2); // concatenando as strings
	    strcat(s1, s3); // concatenando as strings
	    int c3 = atoi(s1);  //convertendo a soma dos pares em uma variavel do tipo inteiro
	    return c3; // retorna o resultado, do tipo inteiro
		}	
//********************************************************************************************//
		float numeroFaixas(int nf){
			float valorComercial;
					switch(nf){
						char c1,c2,c3,c4,c5; // usadas para receber a cor do usuario
						int  f1,f2,f3,f4,resistor,multiplicador; // usadas para transformar a cor em um valor numerico para o calculo
						float tolerancia;						
							case 3:
							printf("\n                   Foram escolhidas 3 faixas de resistores! \n");
							tabela(); // mostra a tabela para o usuario
							f1 = 99;
							while(f1==99){
								printf ("                      Digite o primeiro valor de faixa! \n");
								scanf(" %c",&c1 ); // para inserir um caracter e depois dar um enter é necessario dar um espaço dentro do " %c"//
								c1 = toupper (c1);
								f1 = faixaResistores(c1);
							}	
							f2 = 99;
							while(f2==99){
							printf ("                       Digite o segundo valor de faixa! \n");
							scanf(" %c",&c2);
							c2 = toupper(c2);
							f2 = faixaResistores(c2);
							}
							//pensar em outra logica
							multiplicador = 99;
							while(multiplicador<=99){
							printf ("                 Digite o terceiro valor de faixa (multiplicador)! \n");
							scanf(" %c",&c3);
							c3 = toupper (c3);
							f3 = pow(10,faixaResistores(c3));
							multiplicador = f3;
							}
							printf("\n              Valor Correspondente as cores: %d %d multiplicador: %d  \n                    	  toler%cncia:%c20% \n", f1,f2,multiplicador, 131,241);
							resistor = concatenaDois(f1,f2);	
							valorComercial = ((resistor*multiplicador));
							break;						
						case 4:
							printf("\n                   Foram escolhidas 4 faixas de resistores! \n");
							tabela(); // mostra a tabela para o usuario
							f1 = 99;
							while(f1==99){
								printf ("                      Digite o primeiro valor de faixa! \n");
								scanf(" %c",&c1 ); // para inserir um caracter e depois dar um enter eh necessario dar um espaco dentro do " %c"//
								c1 = toupper (c1);
								f1 = faixaResistores(c1);
							}	
							f2 = 99;
							while(f2==99){
							printf ("                       Digite o segundo valor de faixa! \n");
							scanf(" %c",&c2);
							c2 = toupper (c2);
							f2 = faixaResistores(c2);
							}
							multiplicador = 99;
							while(multiplicador<=99){
							printf ("                 Digite o terceiro valor de faixa (multiplicador)! \n");
							scanf(" %c",&c3);
							c3 = toupper (c3);
							f3 = pow(10,faixaResistores(c3));
							multiplicador = f3;
							}
							tolerancia = 99;
							while(tolerancia==99){
							printf ("                           Digite o valor da toler%cncia! \n", 131);
							scanf(" %c",&c4);
							c4 = toupper (c4);
							tolerancia = toleranciaResistores(c4);
							}
							printf("\n              Valor Correspondente as cores: %d %d multiplicador: %d  \n                    	  toler%cncia: %.2f %% \n", f1,f2,multiplicador, 131, (tolerancia*100));
							resistor = concatenaDois(f1,f2);	
							valorComercial = ((resistor*multiplicador));
							break;						
						case 5:
							printf("\n                       Foram escolhidas 5 faixas de resistores! \n");
							tabela();
							f1 = 99;
							while(f1==99){
							printf ("\n                          Digite o primeiro valor de faixa! \n");
							scanf(" %c",&c1); // para inserir um caracter e depois dar um enter eh necessario dar um espaco dentro do " %c"//
							c1 = toupper (c1);
							f1 = faixaResistores(c1);
							}
							f2 = 99;
							while(f2==99){
							printf ("\n                           Digite o segundo valor de faixa! \n");
							scanf(" %c",&c2);
							c2 = toupper (c2);
							f2 = faixaResistores(c2);
							}
							f3 = 99;
							while(f3==99){
							printf ("\n                          Digite o terceiro valor de faixa! \n");
							scanf(" %c",&c3);
							c3 = toupper (c3);
							f3 = faixaResistores(c3);
							}
							f4 = 99;
							while(f4==99) {
							printf ("\n                     Digite o quarto valor de faixa (multiplicador)!  \n");
							scanf(" %c",&c4);
							c4 = toupper (c4);
							f4 = pow(10,faixaResistores(c4));
							multiplicador = f4;
							}
							tolerancia = 99;
							while(tolerancia==99){
							printf ("\n                             Digite o valor da toler%cncia! \n",131 );
							scanf(" %c",&c5);
							c5 = toupper (c5);
							tolerancia = toleranciaResistores(c5);
							}
							printf("          Valor Correspondente as cores: %d %d %d multiplicador: %d toler%cncia: %.2f %%  \n" , f1,f2,f3, multiplicador,131, (tolerancia*100));
							resistor = concatenaTres(f1,f2,f3);
							valorComercial = ((resistor*multiplicador));
							break;						
					}
				return valorComercial;	
				}
//********************************************************************************************//				
		int corValor(char faixa){ //funcao que retorna os dois primeiros caracteres comerciais em cores 
		char corFaixa;
		switch(faixa){
			case '0': //preto//
			corFaixa='p';
			break;	
			case '1': //marrom//
			corFaixa='m';
			break;	
			case '2': //vermelho//
			corFaixa='v';
			break;		
			case '3': //laranja//
			corFaixa='l';
			break;	
			case '4': //amarelo//
			corFaixa='a';
			break;
			case '5': //verde//
			corFaixa='g';
			break;	
			case '6': //azul//
			corFaixa='b';
			break;
			case '7': //violeta//
			corFaixa='r';
			break;
			case '8': //cinza//	
			corFaixa='c';
			break;
			case '9': //branco//
			corFaixa='w';
			break;	
			default:
			printf ("              ERRO 01: Valor n%co corresponde a uma faixa de cor v%clida \n", 199,160);	//qualquer coisa diferente da cor gera erro
			corFaixa=99;								
		}
			return corFaixa;		
		}
//********************************************************************************************//
//funcao que transforma cor em numero de 0
	char multiplicadorCaseDois(int nzeros){ 
		char mult;
		switch(nzeros){ 
			case 0: 
			mult = 'p';
			break;	
			case 1: 
			mult = 'm';
			break;	
			case 2:
			mult = 'v';
			break;		
			case 3: 
			mult = 'l';
			break;	
			case 4:
			mult = 'a';
			break;
			case 5: 
			mult = 'g';
			break;	
			case 6: 
			mult = 'b';
			break;
			case 7: 
			mult = 'r';
			break;	
			default:
			printf ("              ERRO 01: n%co existe este valor correspondente a cores\n", 199);									
		}
			return mult;		
		}
//********************************************************************************************//
int reiniciar(int retornoMain){
	int escolha,retornoFunc;
	retornoFunc = 0;
	do{
	printf("Deseja calcular outro resistor?  1 = <SIM> 2 = <NAO> \n");
	scanf(" %d", &escolha);
	fflush(stdin); //impede looping infinito em caso de letra digitada
	if(escolha==1){
		retornoMain = 1;
		retornoFunc = 0;
	}
	else if(escolha==2){
		retornoMain = 0;
		printf("Obrigado por utilizar o programa! \n");
		retornoFunc = 0;
		Sleep(500);
	}
	else{
		printf("ERRO 01: Por favor digite um valor valido! 1 ou 2 \n");
		retornoFunc = 1;
	}
	
}while(retornoFunc);
return retornoMain;	
}
//********************************************************************************************//
int main(){
	int decisao,continuar;//decisao feita pelo usuario// continuarlaço de repetição
	int valorCorreto, resultado; // controle de decisao//
	float valorComercial;
	int retorno,r;
	retorno = 0;
	printf("Bem vindo(a) a calculadora de Resistores! \n \n \n");
	do{
		printf("Por favor digite 1 para calculo com base em cores e 2 para calcular com base em um valor comercial: ");
		scanf(" %d", &decisao);
		fflush(stdin); //impede looping infinito em caso de letra digitada
		switch(decisao){
			case 1:{
				int nf;
				printf("\n                   Modo escolhido: C%clculo com base em cores \n", 160);
				printf("\n                   Quantas faixas o resistor possui? 3, 4 ou 5? \n");
				scanf("%d",&nf);
				fflush(stdin); // impede looping infinito ao usuario pressionar um caractere
				numeroFaixas(nf);		
				printf("\n                   O valor comercial corresponde a : %.f Ohm\n \n ", numeroFaixas(valorComercial));
				retorno = reiniciar(r);
				break;
			}
			case 2:{
			
				char resistor[50], c,f,fm;
				tabela();
				printf("Digite o valor do resistor: \n");
				scanf(" %s",&resistor);
				fflush(stdin); // impede looping infinito ao usuario pressionar um caractere
				int qtdzeros = 0; // armazena  a quantidade de zeros para achar o multiplicador
				for (int i = 0; resistor[i] != 0; i++) {
					if (resistor[i] == '0') qtdzeros++;
					    }
				fm = multiplicadorCaseDois(qtdzeros);
				int x=0;
				while( resistor [x] != '0' ){
					    c = resistor [x];
					    f = corValor (c);
						printf(" \n Valor da cor %d: %c \n " ,(x+1), f);
						x++;
						};
				printf (" \n Multiplicador : %c\n ",fm);
				retorno = reiniciar(r);
				break;
			}
			default:
				printf("Erro 00: Valor Invalido! Digite 1 ou 2. \n");
				retorno = 1;
				break;
		}//fim do switch
	}while(retorno); //fim do do while	
}
