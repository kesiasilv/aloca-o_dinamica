#include <stdio.h>
#include <stdlib.h>
/*a funçõa realloc serve para alocar memória ou realocar blocos de
memória previamente alocados pelas funções malloc(), calloc() ou realloc*/
//protótipo:
//void* realloc(void* ptr, unsigned int num)
int main(){
	int *p = (int *) malloc(5*sizeof(int));
	p = (int *) realloc(p, 15*sizeof(int));
	if(p == NULL){
		printf("Erro: sem memória!\n");
		exit(1);
	}
	/*a dunção free() : sempre que alocamos memória é
	necessário liberá-la quando ela não for mais necessária*/
	free(p);
}
