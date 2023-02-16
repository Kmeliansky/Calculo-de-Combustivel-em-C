#include <stdio.h>
#include <stdlib.h>

int calculo(float vGas, float vEta);

int main(){
	float precoGasolina, precoEtanol;
	
	 printf("ecoCAR \n");
	 
	 printf("qual o preco da Gasolina? \n");
	 scanf("%f", &precoGasolina);
	 
	  printf("qual o preco do etanol? \n");
	 scanf("%f", &precoEtanol);
	 
	 int resultado = calculo(precoGasolina, precoEtanol);
	 
	 if(resultado == 0){
	 	printf("Compensa abastecer com gasolina \n");
	 } else if( resultado ==1){
	 	printf("Compensa abastecer com Etanol \n");
	 } else{
	 	printf("Os dois valores s�o equivalentes \n");
	 }
	 
	 system("pause");
	return 0;
}

int calculo(float vGas, float vEta){
	//Pre�o gasolina * 0,7 = Pre�o Maximo do Alcool
	
	if((vGas * 0.70) < vEta){
		
		//Conpensa abastecer com gasolina
		return 0;
	} else if((vGas * 0.70) > vEta){
		
		//conpensa abastecer com etanol
		return 1;
	} else{
		// Os valores s�o equivalentes
		return 2;
	}
}



