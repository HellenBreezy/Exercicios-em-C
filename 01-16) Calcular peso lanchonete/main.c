#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*A lanchonete Gostosura vende apenas um tipo de sandu�che, cujo recheio inclui duas fatias de
queijo, uma fatia de presunto e uma rodela de hamb�rguer. Sabendo que cada fatia de queijo ou
presunto pesa 50 gramas, e que a rodela de hamb�rguer pesa 100 gramas, fa�a um algoritmo em
que o dono forne�a a quantidade de sandu�ches a fazer, e a m�quina informe as quantidades (em
quilos) de queijo, presunto e carne necess�rios para compra. */


int main(int argc, char *argv[]) {
	
	int sanduiches = 0;
	
	printf("Insira a quantidade de sandu�ches:");
	scanf("%d", &sanduiches);
	
	float pesoDeQueijo = 0.050 * 2 ;
	float pesoDePresunto = 0.050 ; 
	float pesoHamburguer = 0.100 ;
	
// fatias de queijo = 2;
// fatias de presunto = 1;
// rodelas de hamburguer = 1.
// sanduiche = ( 2 * fatiasDeQueijo ) + ( 1 * fatiasDePresunto ) + ( 1 * rodelasDeHamburguer).

     pesoDeQueijo = sanduiches * pesoDeQueijo ;
     pesoDePresunto = sanduiches * pesoDePresunto ;
     pesoHamburguer = sanduiches * pesoHamburguer ;

	printf("A quantidade requisitada para compra �: \nFatias de Queijo = %.3f Kg \nFatias de Presunto = %.3f Kg \nRodelas de Hamb�guer = %.3f Kg\n", pesoDeQueijo, pesoDePresunto,pesoHamburguer);
	
	
	
	
	
	
	
	
	
	return 0;
}
