#include <stdio.h>
int identitat(int m[][], int dimensio);

int main() {
    int i, j;
    int matriu[5][5];
    srand(time(NULL))

    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            if(i == j) matriu[i][j] = 27;
            else atriu[i][j] = 0;

    // Imprimir la matriu
    printf("Matriu 5x5 amb numeros aleatoris:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++)
            printf("%3d ", matriu[i][j]);
        printf("\n");
    }

    return 0;
 }

 int identitat(int m[][], int dimensio){
 int i, j, id;
 id = true;
 for(int i = 0; i < dimensio; i++)
        for(int j = 0; j < dimensio; j++)
            if(i == j) id = id && (m[i][j] == 1);
            else id = id && (m[i][j] == 0);

 return id;
 }



