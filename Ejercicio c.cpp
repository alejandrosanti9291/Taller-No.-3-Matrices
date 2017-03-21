/*
Programa: preguntando al usuario el número de filas y columnas,llenarla de números aleatorios, copiar el contenido a otra matriz y por último mostrarla en pantalla
Autor: Alejandro Santibañez Sanchez
Fecha: 16/03/2017
Resumen: Programa que pregunta al susuario el numero de filas y columnas, copiar el contenido en otra matriz y mostrarla en pantalla.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){

    int matriz[100][100], filas, columnas, numero_aleatorio, f, c;

    printf("Digite el numero de filas: "); scanf("%d", &filas);
    printf("Digite el numero de columnas: "); scanf("%d", &columnas);

    for(f = 0; f < filas; f++){
        for(c = 0; c < columnas; c++){
            numero_aleatorio = rand()%(9);
            matriz[f][c] = numero_aleatorio;
            printf("%d ",matriz[f][c]);
        }
    printf("\n");
     }
    return 0;
}

