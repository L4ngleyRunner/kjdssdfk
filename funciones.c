#include <stdio.h>
#include "funciones.h"

void listarProductos(char productos[][3][40],double precio[],int indice[]){
    for (int i = 0; i < indice; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%s\t", productos[i][j]);
        }
        printf("%s\t", precio[i]);
};
};