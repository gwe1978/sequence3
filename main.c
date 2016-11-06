#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions.h"

int main(){
	/* 0. Déclaration */
	int n1, n2, calcul;

	/* 1. Calculs et affichages */
	srand((unsigned)time(NULL));
	n1=hasard(10,60);
	n2=hasard(10,60);
	calcul=somme(n1,n2);
	printf("La somme de %d et de %d vaut %d\n\n", n1, n2, calcul);

	return 0;
}
