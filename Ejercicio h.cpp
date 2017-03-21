/*
Programa: calcule el producto de dos matrices cuadradas de 3x3.
Autor: Alejandro Santibañez Sanchez
Fecha: 16/03/2017
Resumen: Programa  que calcule el producto de dos matrices cuadradas de 3x3
*/

#include<stdio.h>

int main(){
    int matriz1 [3][3];
    int matriz2 [3][3];
    int f, c, producto_matriz[3][3];

    printf("       PRIMERA MATRIZ \n");
    for(f = 0; f < 3; f++) {
        for(c = 0; c < 3; c++) {
            printf ("ingrese el valor en la posicion [%d][%d] ",f,c);scanf ("%d", & matriz1[f][c]);
        }
    }
     printf("     SEGUNDA MATRIZ \n");
      for(f = 0; f < 3; f++) {
        for(c = 0; c < 3; c++) {
             printf ("ingrese el valor en la posicion [%d][%d] ",f,c);scanf ("%d", & matriz2[f][c]);
        }
    }
    printf(" \n\tPRIMERA MATRIZ \n");
      for(f = 0; f < 3; f++) {
        for(c = 0; c < 3; c++) {
             printf ("%d",matriz1[f][c]);
        }
        printf("\n");
    }
    printf("\n\tSEGUNDA MATRIZ \n");
      for(f = 0; f < 3; f++) {
        for(c = 0; c < 3; c++) {
             printf ("%d",matriz2[f][c]);
        }
         printf("\n");
    }
    printf("\n\tESTA ES LA MULTIPLICACION DE LAS 2 MATRICES \n");
    for(f = 0; f < 3; f++) {
        for(c = 0; c < 3; c++) {
            producto_matriz[f][c] = matriz1[f][c] * matriz2[f][c];
            printf("%d",producto_matriz[f][c]);
        }
        printf("\n");
     }
    return 0;
}
