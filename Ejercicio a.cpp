/*
Programa: Para rellenar una matriz pidiendo al usuario el numero de filas y columnas.
Autor: Alejandro Santibañez Sanchez.
Fecha: 11/04/2017.
Resumen: Programa que rellena una matriz pidiendo al usuario el numero de filas y columnas y mostrando la matriz en pantalla.
*/

#include<stdio.h>

int main(){
    int matriz[100][100];
    int filas, columnas;

    printf("Ingrese el numero de filas y columnas \n");
    scanf("%d %d", &filas, &columnas);

    for(int i = 0;i < filas;i++){
        for(int j = 0;j < columnas;j++){
            printf("Digite un numero \n");
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i=0;i < filas;i++){
        for(int j=0;j<columnas;j++){
            printf("%d", matriz[i][j]);
        }
    }

    return 0;
}
