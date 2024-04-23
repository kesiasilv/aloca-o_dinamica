#include <stdio.h>
#include <stdlib.h>
/*a funçõa malloc serve para alocar memória durante a execução
do programa. Ela faz pedido de memória ao computador e retorna 
um ponteiro com o endereço do inicio do escopo de memória alocado*/
//protótipo:
//void* malloc(unsigned int num)
int main(){
	int *p;
	p = (int *) malloc(5 * sizeof(int));
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
