#include <stdio.h>
#include <string.h>
#include "array_list.h"

typedef struct {
	char nombre[40];
	int edad;
} Persona;

void imprimirPersona(Persona *p) {
	printf("Nombre: %s, Edad: %d\n", p->nombre, p->edad);
}

int main() {
	

	Arraylist*milista = arraylist_create(3, sizeof(Persona));
	

	Persona p1 = {"Darcy", 20};
	Persona p2 = {"Daniel", 30};
	Persona p3 = {"Anyi", 25};
	Persona p4 = {"Juan", 40};
	Persona insertado = {"Luis", 50};
	
	
	arraylist_add(milista, &p1);
	arraylist_add(milista, &p2);
	arraylist_add(milista, &p3);
	arraylist_add(milista, &p4);
	

	arraylist_insert(milista, &insertado, 1);
	
	printf("\nLista despues de insertar a Luis:\n");
	for (int i = 0; i < milista->size; i++) {
		printf("Posicion %d:\n", i);  
		Persona *p = (Persona*)arraylist_get(milista, i);
		imprimirPersona(p);
	}

	Persona *obtenido = (Persona*)arraylist_get(milista, 2);
	
	printf("\nPersona en posicion 2:\n");
	imprimirPersona(obtenido);
	

	arraylist_remove(milista, 0); 
	arraylist_remove(milista, 1); 
	

	printf("\nLista después de eliminar 2 personas:\n");
	for (int i = 0; i < milista->size; i++) {
		Persona *p = (Persona*)arraylist_get(milista, i);
		imprimirPersona(p);
	}
	
	arraylist_destroy(milista);
	
	return 0;
}
