#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float valor,temp1,temp2;
	char temperatura;
		printf ("Escolha a escala de temperatura (F,C ou K:)\n");
	scanf ("%c",&temperatura);
	
	printf ("Digite o valor que deve ser convertido (somente numeros): \n");
	scanf ("%f",&valor);

	
	if (temperatura=='C' and valor>-273){
		temp1 = valor+273.15;
		printf ("a temperatura em Kelvin é %f \n", temp1);
		temp2 = (valor*1.8)+32;
		printf ("a temperatura em Fahrenheit é %f \n", temp2);
	}
	else if (temperatura=='F' and valor>0){
		temp1 = (valor+459.67)/1.8;
		printf ("a temperatura em Kelvin é  %f \n", temp1);
		temp2 = (valor-32)*5/9;
		printf ("a temperatura em Celsius é %f \n", temp2);
	}
	else if (temperatura=='K' and valor>0){
		temp1 = valor-273.15;
		printf ("a temperatura em Celsius é %f \n", temp1);
		temp2 = (valor*1.8)-459.89;
		printf ("a temperatura em Fahrenheit é %f \n", temp2);
	}
	else{
		printf ("lembre-se,não existe temperatura em Celsius abaixo do zero absoluto (-273) e K e F não podem ser negativos! \n");
	
	}
	system("pause");
}

