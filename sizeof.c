#include <stdio.h>
#include <stdlib.h>

int main(){
	/*sizeof: retorna o númweo de bytes necessários para
	alocar um único elemento de um determinado tipo de dado*/
	int x = sizeof(int);
	printf("x = %d ", x);
	
	//ou pode ser chamada na propria linha do printf ex:
	//printf("x = %d", sizeof(x));
	
}
