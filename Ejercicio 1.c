#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 /*Este programa fue codificado por Bolaños Gómez Martín, González Zamora Leonardo Demián, Portillo López Juan Manuel y Rojas Jiménez Claudia Alin.
  Creado el 5/Marzo/2021 */
int main(){
	int *a = NULL;//Se declara una variable apuntador como arreglo de variables de una dimension

	a = (int*) malloc(sizeof(int)*10);//Se reserva memoria para un arreglo de 10 elementos del tamaño de int (4 bytes)
	
	//Inciso a)
	printf("\tInciso a)\n");
	for(int i = 0; i < 10; i++){//Este ciclo recorre el arreglo para imprimir las direcciones de memoria de cada elemento
		printf("La direccion de memoria del elemento %i es: %p\n", i, &a[i]);
	}
	//Inciso b)
	printf("\tInciso b)\n");
	printf("Direccion de memoria del primer elemento del arreglo: %p\n" ,&a[0]);
	printf("Direccion de memoria de la variable de tipo arreglo:  %p\n", a);
	
	free(a);
	return 0;
}
