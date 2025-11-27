#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#inlcude "array_list.h"
//Los arrays list empiezan con un numero minimo de elementos que seria esta constante 
#define DEFAULT_CAPACITY 10
// Cada que se llena la ista, esta va a crecer, pero no sumandole su cantiidad por defecto
// Sino que va creciendo linealmente segun las necesidades
#deine GROWTH_FACTOR 2 

ArrayList*array_create(int initial_capacity, int element_size){
	//El desarollador puede escoger una capacidad inical custom, pero si no la define 
	// se va con la capacidad minima por defecto
	if (initial_capacity <= 0){
	initial_capacity = DEFAULT_CAPACITY;
	}
	
ArrayList list = (ArrayList)malloc(sizeof (ArrayList)):
if(list){
printf("No se puedo asignar memoria");
	return NULL;
	}
list -> data = (void*)malloc(sizeof (void) * initial_capacity):
if( !list->data)
free(list);
	printf("No se pudo solicitar memoria para almacenar los datos de la lista");
	return NULL;
}

list-> size = 0; list-capacity = initial_capacity; list-›element_size = element_size;
}


