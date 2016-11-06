#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int n1, n2, calcul;

	srand((unsigned)time(NULL));
	n1=rand()%51+10;
	n2=rand()%51+10;
	calcul=n1+n2;
	printf("La somme de %d et de %d vaut %d\n\n", n1, n2, calcul);

	return 0;
}
