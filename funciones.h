#ifndef FUNCIONESH
#define FUNCIONESH
#include<stdio.h>
#include<stdlib.h>

	struct Lista{
		int dato;
		struct Lista* sig;
	};
	
	struct Lista *Agregar(struct Lista* lista, int n);
	void mostrar (struct Lista* lista);
	struct Lista *Eliminar(struct Lista* , int );
	
	#endif 
