	#include <stdio.h>
	#include <stdlib.h>
	#include "ArvoreBiBusca.h"
	
	struct arvoreBusca{
	int conteudo;
	ArvoreBusca *esquerda;
	ArvoreBusca *direita;
	};
			
	ArvoreBusca * novaArvore(){
	  return NULL;
	}
	
	ArvoreBusca *novoNo(int conteudo){
	
	ArvoreBusca *novo = (ArvoreBusca*) malloc(sizeof(ArvoreBusca));
	novo->conteudo = conteudo;
	novo->esquerda = NULL;
	novo->direita = NULL;
	return novo;
	}
	
	ArvoreBusca* inserir(ArvoreBusca* busca, int conteudo){
	
	ArvoreBusca *aux = busca;
	ArvoreBusca *novo = novoNo(conteudo);
	
		if(busca == NULL){ 
	   busca = novo;
	   return busca;
	 }
	
	while(aux != NULL){
	
	if(conteudo < aux->conteudo){
	if(aux->esquerda != NULL)
	       aux = aux->esquerda;
	    else{
	        aux->esquerda = novo;
	        break;
	   }
	}else{
	   if(conteudo > aux->conteudo){
    	if(aux->direita != NULL)
	           aux = aux->direita;
	        else{
	           aux->direita = novo;
	           break;
	 }
	   }else{
	       aux->conteudo = conteudo;
	       break;
	  }
	}
	}
	
	return busca;
	}
	
	int busca(ArvoreBusca *busca, int conteudo){
	
	ArvoreBusca* aux = busca;
	int profund = 0;
	
	while(aux != NULL){
	
	if(aux->conteudo == conteudo) break;
	
	if(conteudo < aux->conteudo){
	      if(aux->esquerda != NULL){
	          aux = aux->esquerda;
	          profund = profund + 1;
	  }else{
	  profund = -1;
	  break;  
	}
	}else{
	
	if(conteudo > aux->conteudo){
	      if(aux->direita != NULL){
	          aux = aux->direita;
	          profund = profund + 1;
	  }else{
	  profund = -1;
	  break;  
	}
	}  
	
	}
	 }
	return profund;
	} 
	void pre_ordem_aux(ArvoreBusca *busca) { 
				 
					if (busca != NULL) { 
						printf("%d - ", busca->conteudo); 
						pre_ordem_aux(busca->esquerda); 
						pre_ordem_aux(busca->direita); 
					}
					
				}
				
				void pre_ordem(ArvoreBusca *busca) { 
					pre_ordem_aux(busca);
				
				}
	
	void em_ordem_aux(ArvoreBusca *busca) {
			
					if (busca != NULL) { 
						em_ordem_aux(busca->esquerda); 
						printf("%d - ", busca->conteudo);
						em_ordem_aux(busca->direita); 
					}
				
				}
				
				void em_ordem(ArvoreBusca *busca) { 
					em_ordem_aux(busca);
	
				}
				
				void pos_ordem_aux(ArvoreBusca *busca) {
				
					if (busca != NULL) { 
						pos_ordem_aux(busca->esquerda); 
						pos_ordem_aux(busca->direita); 
						printf("%d - ", busca->conteudo); 
					}
			
				}
			
				void pos_ordem(ArvoreBusca *busca) { 
					pos_ordem_aux(busca); 
				}
	
	void clear(ArvoreBusca *busca){ 
		
				if (busca != NULL){ 
				  ArvoreBusca* aux = busca; 
				  clear(aux->esquerda); 
				  clear(aux->direita); 
					free(aux); 
				}
			
				}
	
