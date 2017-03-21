/*
Programa: Una matriz de tipo entera de 2x2, llenarla de números y luego copiar todo su contenido hacia otra matriz
Autor: Alejandro Santibañez Sanchez
Fecha: 16/03/2017
Resumen: Matriz 2x2 cuyo contenido se copiara en otra matriz.
*/

#include<stdio.h>

int main(){
	int matriz1[2][2];

	int matriz2[2][2];
	int f,c;

	for(int f=0;f<2;f++){
		for(int c=0;c<2;c++){
            printf("ingrese valor posicion [%d][%d]\n",f,c);
            scanf("%d",&matriz1[f][c]);
			matriz2[f][c]=matriz1[f][c];
            }
            for(int f=0;f<2;f++){
                for(int c=0;c<2;c++){
                    printf("posicion [%d][%d]=%d\n ", f, c,matriz2[f][c]);
            }
		}
		printf("\n");
	}
	return 0;
}
