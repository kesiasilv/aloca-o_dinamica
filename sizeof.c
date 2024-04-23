#include <stdio.h>
#include <stdlib.h>

int main(){
	/*sizeof: retorna o númweo de bytes necessários para
	alocar um único elemento de um determinado tipo de dado*/
	//forma geral: sizeof(nome_do_tipo) ou sizeof(nome_da_variável)
	int x = sizeof(int);
	printf("x = %d ", x);//retornou o valor "4" pois, número inteiro possui 4 bytes
	
	//ou pode ser chamada na propria linha do printf ex:
	//printf("x = %d", sizeof(x));
	
}
