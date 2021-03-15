#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 /*Este programa fue codificado por Bolaños Gómez Martín, González Zamora Leonardo Demián, Portillo López Juan Manuel y Rojas Jiménez Claudia Alin.
  Creado el 5/Marzo/2021 */
int main(){
	int **a = NULL;//Se declara una variable apuntador como arreglo de variables de dos dimensiones **

	a = (int**)malloc(sizeof(int*)*3);//Se reserva memoria para un arreglo de 3 elementos de tamaño int que corresponderan a los renglones
	
	for(int i = 0; i < 3; i++){//Con este ciclo se reserva memoria en cada elemento de los renglones para generar las columnas
		a[i] = (int*)malloc(sizeof(int)*3);
	}
	
	//Inciso a)
	printf("\tInciso a)\n");
	for(int i = 0; i < 3; i++){//Este ciclo recorre el arreglo para imprimir las direcciones de memoria de cada elemento
		for(int j = 0; j < 3; j++){//El primer for corresponde a los renglones y el segundo a las columnas
			printf("La direccion de memoria del elemento %i %i es: %p\n", i, j, &a[i][j]);			
		}
	}
	
	//Inciso b)
	printf("\tInciso b)\n");
	for(int i = 0; i < 3; i++){//Este ciclo imprime unicamente las direcciones de cada elemento de los renglones del arreglo
		printf("La direccion de memoria del renglon %i es: %p\n", i, a[i]);
	}

	//Inciso c)
	printf("\tInciso c)\n");
	printf("Direccion de memoria del primer elemento del arreglo: %p\n" ,&a[0]);
	printf("Direccion de memoria de la variable de tipo arreglo:  %p\n", a);

	free(a);
	return 0;
}
