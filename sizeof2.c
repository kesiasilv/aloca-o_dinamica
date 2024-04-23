#include <stdio.h>
#include <stdlib.h>
struct ponto{
	int x, y;
};

int main(){
	printf("char: %d\n", sizeof(char));//retorna 1
	printf("int: %d\n", sizeof(int));//retorna 4
	printf("float: %d\n", sizeof(float));//retorna 4
	printf("double: %d\n", sizeof(double));//retorna 8
	printf("struct: %d\n", sizeof(struct ponto));//retorna 8
	
}
