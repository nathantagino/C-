#include <stdio.h>
#include <stdlib.h>
typedef structf{
	int codigo;
	float salario;
	int idade;
	char sexo;
}funcionario;
// quando usamos o malloc precisamos definir o espaço de memória que deve ser destinado ao usuário
// o malloc retorna um espaço me memória e pra isso usamos o ponteiro
// para definir o tamanho usamos o sizeoff que faz isso automaticamente, nesse caso usaremos N no lugar de int ou float
// estaremos forçando o malloc a ser um ponteiro, em uma situação normal ele retorna um void
// funcionario*n = fará isso para n número de funcionários.
//free(v) = libera o espaço da memória
int main(){
	int n,i;
	printf("Digite o N \n");
	scanf("%i",&n);
	funcionario *v =(funcionario*)malloc(sizeof(funcionario)*n);
	for(i=0;i<n;i++){
		printf("Digite o Codigo \n");
		scanf("%i",&v[i].codigo);
		printf("Digite o Salario \n");
		scanf("%i",&v[i].salario);
		printf("Digite o Idade \n");
		scanf("%i",&v[i].idade);
		printf("Digite o Sexo(m ou f) \n");
		fflush(stdin);
		scanf("%i",&v[i].sexo);	
	}
	for(i=0;i<n;i++){
		printf("Codigo: %i\n",v[i].codigo);
		printf("Salario: %i\n",v[i].salario);
		printf("Idade: %i\n",v[i].idade);
		printf("Sexo: %i\n",v[i].sexo);
	}
	free(v);
}
