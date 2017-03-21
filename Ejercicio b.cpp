/*
Programa: Que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz
Autor: Alejandro Santibañez Sanchez
Fecha: 16/03/2017
Resumen: Programa que define una matriz 3x3 y muestra la diagonal principal.
*/

#include<stdio.h>

int main(){
    int matriz[3][3]= {{1,2,3}, {4,5,6}, {7,8,9}};
    int i,j;
    printf("Esta es la matriz \n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %d ",matriz[i][j]);
        }
    printf("\n");
     }
    printf("La diagonal principal es: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(matriz[i] == matriz[j]){
            printf(" %d ",matriz[i][j]);
            }
        }
     }
  return 0;
}

