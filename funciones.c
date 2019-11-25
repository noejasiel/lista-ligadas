#include"funciones.h"

	struct Lista *Agregar(struct Lista* lista, int n){
	//	struct Lista *nuevo = calloc (sizeof(struct Lista), 1);
		struct Lista *nuevo = (struct Lista*)malloc(sizeof(struct Lista));
		nuevo -> dato = n;
		nuevo -> sig = NULL;
		if(lista){
			struct Lista *aux = NULL;
			aux = lista;
			while(aux -> sig != NULL){
				aux = aux -> sig;
			}
			aux -> sig = nuevo;
			//printf("\n guardando dato %d \n", aux->dato);
			return lista;
		}else{
			lista = nuevo;
			return lista;
		}
		
	}
	
	void mostrar (struct Lista* lista){
		if(lista){
			struct Lista *aux = lista;
			printf("%d--", aux -> dato);
			mostrar(aux->sig);
		}else{
			printf("\n no hay datos \n");
		}
	}
	
	struct Lista *Eliminar (struct Lista *lista, int n){
		
		if(lista){
			struct Lista *aux = lista;
			
			if(lista -> dato == n){
				//struct Lista *aux = lista;
				lista = lista -> sig;
				aux -> sig = NULL;
				free (aux);
				return lista;
			}
			
			while(aux ->sig -> dato != n){
				aux = aux -> sig;	
			}
			struct Lista * nodo_eliminar = aux -> sig;
			if(nodo_eliminar -> sig != NULL){
				aux -> sig = NULL;
				aux -> sig = nodo_eliminar -> sig;
				nodo_eliminar -> sig = NULL;
				free(nodo_eliminar);
				return lista;
			}else{
				aux -> sig = NULL;
				free(nodo_eliminar);
				return lista;
			}
			
			
		}else{
			("\n lista vacia \n");
		}
		
	}
