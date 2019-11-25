#include"funciones.h"
	
	int main(){
		struct Lista* lista = NULL;
		lista = Agregar (lista, 45);
		lista = Agregar (lista, 5);
		lista = Agregar (lista, 4);
		lista = Agregar (lista, 54);
		lista = Agregar (lista, 435);
		mostrar (lista);
		lista = Eliminar (lista, 435);
		mostrar (lista);
		return 0;
	}
	

