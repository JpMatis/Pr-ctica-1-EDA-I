#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int ***a = NULL;//Se declara una variable apuntador como arreglo de variables de tres dimensiones ***
	int contador = 0;
	
	a = (int ***)malloc(sizeof(int**)*3);//Se reserva memoria para un arreglo de 3 elementos de tamaño int que corresponderan a la primer dimension del arreglo
	for(int i = 0; i < 3; i++){
		a[i] = (int **)malloc(sizeof(int*)*2);//Con este ciclo se reserva memoria en cada elemento de la primer dimension para generar la segunda dimension del arreglo
		for(int j = 0; j < 2; j++){
			a[i][j] = (int *)malloc(sizeof(int)*4);//Con este ciclo se reserva memoria en cada elemento de la segunda dimension para generar la tercera dimension del arreglo
		}
	}
	
	//Inciso a)
	printf("\tInciso a)\n");//Este ciclo recorre el arreglo para imprimir las direcciones de memoria de cada elemento
	for(int i = 0; i < 3; i++){//Primer for corresponde a los elementos de la primera dimension del arreglo
		for(int j = 0; j < 2; j++){//Segundo for corresponde a los elementos de la segunda dimension del arreglo
			for(int k = 0; k < 4; k++){//Primer for corresponde a los elementos de la tercera dimension del arreglo
				contador = contador +1;
				printf("%i La direccion del elemento %i %i %i del arreglo es: %p\n", contador, i, j, k, &a[i][j][k]);
			}
		}
	}
	
	//Inciso b)
	printf("\n\tInciso b)");
	for(int i = 0; i < 3; i++){//Este ciclo recorre el arreglo para imprimir las direcciones de memoria de cada elemento
		printf("\n");		   //Se imprime un salto despues de que la segunda y tercera dimension del arreglo se imprimieron para asi darle formato de matriz de 2x4
		for(int j = 0; j < 2; j++){
			for(int k = 0; k < 4; k++){
				//contador = contador +1;
				printf("La direccion del elemento %i %i del arreglo es: %p\n", i, k, &a[i][j][k]);
			}
		}
	}
	
	//Inciso c)
	printf("\n\tInciso c)\n");
	printf("Direccion de memoria del primer elemento del arreglo: %p\n" ,&a[0]);
	printf("Direccion de memoria de la variable de tipo arreglo:  %p\n", a);
	free(a);
	return 0;
}
