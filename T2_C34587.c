#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generarArreglo(int arreglo[], int n) {
    for (int i = 0; i < n; i++) {
        arreglo[i] = rand() % 10000;
    }
}


void bubbleSort(int arreglo[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arreglo[j] > arreglo[j+1]) {

                int temp = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = temp;
            }
        }
    }
}

void selectionSort(int arreglo[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min_indice = i;
        for (int j = i+1; j < n; j++) {
            if (arreglo[j] < arreglo[min_indice]) {
                min_indice = j;
            }
        }

        int temp = arreglo[min_indice];
        arreglo[min_indice] = arreglo[i];
        arreglo[i] = temp;
    }
}

void copiarArreglo(int origen[], int destino[], int n) {
    for (int i = 0; i < n; i++) {
        destino[i] = origen[i];
    }
}

int main() {
    int n;
    clock_t inicio, fin;
    double tiempo_bubble, tiempo_selection;
    
    srand(time(0));
    
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &n);
    
    int *arreglo_original = (int *)malloc(n * sizeof(int));
    int *arreglo_bubble = (int *)malloc(n * sizeof(int));
    int *arreglo_selection = (int *)malloc(n * sizeof(int));
    
    
    generarArreglo(arreglo_original, n);
    
    copiarArreglo(arreglo_original, arreglo_bubble, n);
    
    inicio = clock();
    bubbleSort(arreglo_bubble, n);
    fin = clock();
    tiempo_bubble = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    
    copiarArreglo(arreglo_original, arreglo_selection, n);
    
    inicio = clock();
    selectionSort(arreglo_selection, n);
    fin = clock();
    tiempo_selection = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    
    printf("\nResultados para tamaño %d:\n", n);
    printf("Bubble Sort: %.6f segundos\n", tiempo_bubble);
    printf("Selection Sort: %.6f segundos\n", tiempo_selection);
    
    return 0;
}