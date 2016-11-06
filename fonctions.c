#include <stdlib.h>

int hasard(int min, int max){
	return rand()%(max-min+1)+min;
}

int somme(int a, int b){
	return a+b;
}
