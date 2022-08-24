#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Calcule a área de uma pizza que possui um raio R (pi=3.14)
//(A = p r²)

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"");
	
	float r = 3.14;
	float pi =  3.14;
	float area = pi * (r * 2);
	
	
printf("A area do circulo é: %f", area);
	
	
	
	
	
	
	return 0;
}
