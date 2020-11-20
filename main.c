#include <stdio.h>
#include <stdlib.h>
#include "ArvoreBiBusca.h"


int main() {
	
	ArvoreBusca* ab = novaArvore();
	 
	ab = inserir(ab, 17);
	
	ab = inserir(ab, 99);
	
	ab = inserir(ab, 13);
	
	ab = inserir(ab, 1);
	
	ab = inserir(ab, 3);
	
	ab = inserir(ab, 100);
	
	ab = inserir(ab, 400);
	
	printf("Pre - ordem \n");
	pre_ordem(ab);
	
	printf("\n\n");
	
	printf("Pos - ordem \n");
	pos_ordem(ab);
	
	printf("\n\n");
	
	printf("Em ordem \n");
	em_ordem(ab);
	
	printf("\n");
	
	int resul = busca(ab, 100);
	
	printf("\nBusca por um elemento retornando seu nivel, -1 caso contrario : %d", resul);
	
	clear(ab);
	
	return 0;
}
