#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*13. Ler um n�mero inteiro (assuma at� tr�s d�gitos) e imprimir a sa�da da seguinte forma: 
CENTENA = x 
DEZENA = x 
UNIDADE = x */


int main() {

 int centenas = 0;
 int dezenas = 0;
 int unidades = 0;

printf("Insira o valor:");

 int numero = 0;

scanf("%d", &numero);

 centenas = numero / 100;
 numero = numero - centenas * 100;
   
 dezenas = numero / 10;
 numero = numero - dezenas * 10;
   
 unidades = numero;
 
printf("\nCentenas = %d\nDezenas = %d \nUnidades = %d", centenas, dezenas, unidades); 


	return 0;
}
