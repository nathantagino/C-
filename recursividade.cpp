//recursividade busca atingir o "menor resultado possível"
//Nesse caso vamos somar até até o menor número
#include <studio.h>
#include <stdlib.h>
int somatoria(int n){
	if(n==0) return 0;
	else return n+somatoria(n-1);	
}

int main(){
	int s,num;
	printf("Digite um numero \n");
	scanf("%i",&num);
	s=somatoria(num);
	printf("Soma=%i\n",s);
}