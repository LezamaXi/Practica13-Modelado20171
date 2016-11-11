/*Incluye las funciones de b_sort.c y arreglos_random.c*/
#include "b_sort.h"
#include "arreglos_random.h"

/*Declara las funciones que vamos a ocupar*/

// función que compara dos enteros
int cmp_int(const void *a, const void *b)
{
    int uno = *((int*)a);
    int dos = *((int*)b); 
    return uno-dos;
}
// función que compara dos doubles
int cmp_double(const void *a, const void *b){
    double uno = *((double*)a); 
    double dos = *((double*)b); 
    if(uno < dos){
        return -1; 
    }
    else if(uno > dos){
        return 1; 
    }
    else{
        return 0; 
    }
}
// función que imprime una lista de enteros de tamaño num
void imprime_int(int *arreglo, size_t num){
    for(int i= 0; i < num-1; i++){ 
        printf("%d%s", arreglo[i], ", "); 
    }
    printf("%d\n\n",arreglo[num-1]); 
}
// función que imprime una lista de doubles de tamaño num
void imprime_double(double *arreglo, size_t num){
    for(int i= 0; i < num-1; i++){ 
        printf("%.3f%s", arreglo[i], ", "); 
    }
    printf("%.3f\n\n", arreglo[num-1] );
}


int main()
{
    // Se inicializan 2 arreglos, uno de ints y otro de doubles
    int *arr1 = arreglo_int(20, 0, 10);
    double *arr2 = arreglo_double(20, 0, 10);

    // Se imprime ordena e imprime el primer arreglo
    imprime_int(arr1, 20);
    bsort(arr1, 20, sizeof(int), &cmp_int);
    imprime_int(arr1, 20);

    // Se imprime ordena e imprime el segundo arreglo
    imprime_double(arr2, 20);
    bsort(arr2, 20, sizeof(double), &cmp_double);
    imprime_double(arr2, 20);

    // Se libera la memoria que ocupan los arreglos ordenados
    free(arr1);
    free(arr2);

    return 0;
}




