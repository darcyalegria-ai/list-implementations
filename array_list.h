#include <stdio.h>

int main() {
	return 0;
}

#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H
typedef struct{
	void **data; //almacenamiento de elementos
	int size; //Num de elementos de la lista
	int capacity; //Max obj
	int element_size;//tamaño de elementos
}Arraylist;

//Crear o borrar listas
Arraylist* arrayList_create(int initia_capacity, int element_size);
void arrayList_destroy(Arraylist *list);

//Operaciones
void arraylist_add(Arraylist *list, void *element); 
void arraylist_insert(Arraylist *list, void *element, int index); 
void *arraylist_get(Arraylist *list, int index); 
int arraylist_remove(Arraylist *list, int index); 
void arraylist_clear(Arraylist *list);

//Adicionales pero importantes
void arraylist_ensure_capacity(Arraylist *list, int min_capacity);
void arraylist_trim_to_size(Arraylist *list);
Arraylist* arraylist_(Arraylist *list);

#endif
