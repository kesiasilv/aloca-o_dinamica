#include <stdio.h>
#include <stdlib.h>
/*a funçõa calloc serve para alocar memória durante a execução
do programa. Ela faz pedido de memória ao computador e retorna 
um ponteiro com o endereço do inicio do escopo de memória alocado*/
//a diferença de malloc para calloc é que calloc inicializa todos os bits do espaço alocado com 0's
//protótipo:
//void* calloc(unsigned int num, unsigned int size)
int main(){
	int *p;
	
	p = (int *) calloc(5, sizeof(int));
	
	if(p == NULL){
		printf("Erro: Sem Memória!\n");
		exit(1);//termina o programa
	}
	int i;
	for(i = 0; i<5; i++){
		printf("digite p[%d]: ", i);
		scanf("%d", &p[i]);
	}
	/*a dunção free() : sempre que alocamos memória é
	necessário liberá-la quando ela não for mais necessária*/
	free(p);
}
