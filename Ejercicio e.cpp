/*
Programa: Una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original
Autor: Alejandro Santibañez Sanchez
Fecha: 16/03/2017
Resumen: Programa de una matriz 3x3 traspuesta.
*/
#include<stdio.h>

int main(){
    int matriz[3][3];
	for(int f=0;f<3;f++){
		for(int c=0;c<3;c++){
			printf("Digite un numero [%d][%d]:\n",f,c);
			scanf("%d",&matriz[f][c]);
		}
	}
	printf("\nMatriz Normal\n");
	for(int f=0;f<3;f++){
		for(int c=0;c<3;c++){
			printf("%d",matriz[f][c]);
		}
		printf("\n");
	}
	printf("\nMatriz Transpuesta\n");
	for(int f=0;f<3;f++){
		for(int c=0;c<3;c++){
			printf("%d",matriz[c][f]);
		}
		printf("\n");
	}
	return 0;
}
