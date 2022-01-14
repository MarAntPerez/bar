#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*Constante que guarda la mayoria de edad*/
	const int MAYORIA_EDAD = 18;
	
	/*Variable que guarda la edad del usuario que desea ingresar al bar*/
	int edad = 15;
	
	printf("Bienvenido Pepito tu edad es: %i", edad);
	
	if(edad>=MAYORIA_EDAD){//Hola.
		printf("\nBienvenido, puedes entrar.");
	}else{
		printf("\nLo sentimos no puedes entrar, eres menor de edad.");
	}
	
	return 0;
}
